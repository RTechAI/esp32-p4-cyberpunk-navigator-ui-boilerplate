#pragma once

#include "esp_err.h"

#ifdef __cplusplus
extern "C" {
#endif

// ============================================================
// ForgeUI One Audio System
// ============================================================
//
// File:
// 30_Audio.h
//
// Created by:
// Scott Forster
//
// Contact:
// forgeui.esp32@gmail.com
//
// Purpose:
// Shared audio backend for ForgeUI One.
//
// Responsibilities:
// - initialise speaker/audio path
// - manage runtime output volume
// - provide simple speaker test playback
//
// Current Features:
// - BSP audio initialisation
// - speaker codec support
// - runtime volume control
// - sine-wave speaker test beep
//
// Rules:
// - backend only
// - no LVGL ownership
// - no UI styling
// - no workflow ownership
// - UI sends intent only
//
// Controlled Through:
//
//   FORGEUI_ENABLE_AUDIO
//
// ============================================================

// ============================================================
// Audio API
// ============================================================

// Initialise audio system
// Safe to call multiple times.
esp_err_t fg_audio_init(void);

// Set speaker volume (0–100)
esp_err_t fg_audio_set_volume(int volume);

// Play simple speaker test beep
esp_err_t fg_audio_test_beep(void);

#ifdef __cplusplus
}
#endif