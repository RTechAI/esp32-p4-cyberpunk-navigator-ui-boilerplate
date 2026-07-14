// ============================================================
// ForgeUI One Audio System
// ============================================================
//
// File:
// 30_Audio.c
//
// Purpose:
// Shared audio backend for ForgeUI One.
//
// Responsibilities:
// - initialise BSP audio path
// - initialise speaker codec
// - manage output volume
// - provide simple speaker test beep
//
// Hardware Path:
//
// Waveshare ESP32-P4-WIFI6-Touch-LCD-7B
//   -> BSP audio init
//   -> ESP codec speaker output
//
// Rules:
// - backend owns audio state
// - UI sends intent only
// - no LVGL ownership
// - no UI styling
// - no workflow ownership
//
// Controlled Through:
//
//   FORGEUI_ENABLE_AUDIO
//
// ============================================================

#include "30_Audio.h"

#include "esp_err.h"
#include "esp_log.h"

#include "bsp/esp-bsp.h"
#include "bsp/esp32_p4_wifi6_touch_lcd_7b.h"
#include "esp_codec_dev.h"

#include <math.h>
#include <stdbool.h>
#include <stdint.h>

// ============================================================
// Local State
// ============================================================

static const char *TAG = "FG_AUDIO";

static esp_codec_dev_handle_t g_speaker = NULL;

static bool g_ready = false;
static bool g_busy  = false;

static int g_volume = 70;

// ============================================================
// Audio Constants
// ============================================================

#define SAMPLE_RATE    16000
#define DURATION_MS    150
#define BEEP_FREQ_HZ   1000

static int16_t g_beep_buffer[SAMPLE_RATE * DURATION_MS / 1000];

// ============================================================
// Audio Init
// ============================================================

esp_err_t fg_audio_init(void)
{
    if (g_ready) {
        return ESP_OK;
    }

    ESP_LOGI(TAG, "Initialising audio");

    esp_err_t err = bsp_audio_init(NULL);

    if (err != ESP_OK) {
        ESP_LOGE(TAG,
                 "bsp_audio_init failed: %s",
                 esp_err_to_name(err));

        return err;
    }

    g_speaker = bsp_audio_codec_speaker_init();

    if (!g_speaker) {
        ESP_LOGE(TAG, "Speaker init failed");
        return ESP_FAIL;
    }

    esp_codec_dev_sample_info_t fs = {
        .sample_rate     = SAMPLE_RATE,
        .channel         = 1,
        .bits_per_sample = 16,
    };

    err = esp_codec_dev_open(g_speaker, &fs);

    if (err != ESP_OK) {
        ESP_LOGE(TAG,
                 "esp_codec_dev_open failed: %s",
                 esp_err_to_name(err));

        return err;
    }

    err = esp_codec_dev_set_out_vol(g_speaker, g_volume);

    if (err != ESP_OK) {
        ESP_LOGW(TAG,
                 "Initial volume set failed: %s",
                 esp_err_to_name(err));
    }

    g_ready = true;

    ESP_LOGI(TAG, "Audio ready");

    return ESP_OK;
}

// ============================================================
// Volume Control
// ============================================================

esp_err_t fg_audio_set_volume(int volume)
{
    if (volume < 0) {
        volume = 0;
    }

    if (volume > 100) {
        volume = 100;
    }

    g_volume = volume;

    esp_err_t err = fg_audio_init();

    if (err != ESP_OK) {
        return err;
    }

    err = esp_codec_dev_set_out_vol(g_speaker, g_volume);

    if (err != ESP_OK) {
        ESP_LOGE(TAG,
                 "Volume set failed: %s",
                 esp_err_to_name(err));
    }
    else {
        ESP_LOGI(TAG,
                 "Volume set: %d%%",
                 g_volume);
    }

    return err;
}

// ============================================================
// Speaker Test Beep
// ============================================================

esp_err_t fg_audio_test_beep(void)
{
    if (g_busy) {
        ESP_LOGW(TAG, "Beep already running");
        return ESP_OK;
    }

    g_busy = true;

    esp_err_t err = fg_audio_init();

    if (err != ESP_OK) {
        g_busy = false;
        return err;
    }

    esp_codec_dev_set_out_vol(g_speaker, g_volume);

    const int samples =
        SAMPLE_RATE * DURATION_MS / 1000;

    for (int i = 0; i < samples; i++) {

        float t = (float)i / SAMPLE_RATE;

        g_beep_buffer[i] =
            (int16_t)(
                sinf(2.0f *
                     (float)M_PI *
                     BEEP_FREQ_HZ *
                     t) * 10000
            );
    }

    err = esp_codec_dev_write(g_speaker,
                              g_beep_buffer,
                              samples * sizeof(int16_t));

    if (err != ESP_OK) {
        ESP_LOGE(TAG,
                 "Write failed: %s",
                 esp_err_to_name(err));
    }
    else {
        ESP_LOGI(TAG,
                 "Beep sent at %d%% volume",
                 g_volume);
    }

    g_busy = false;

    return err;
}