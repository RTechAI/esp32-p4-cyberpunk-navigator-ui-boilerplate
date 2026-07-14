#pragma once

#ifdef __cplusplus
extern "C" {
#endif

// ============================================================
// ForgeUI One RTC System
// ============================================================
//
// File:
// 20_RTC.h
//
// Created by:
// Scott Forster
//
// Contact:
// forgeui.esp32@gmail.com
//
// Purpose:
// Shared runtime RTC and timekeeping layer.
//
// Responsibilities:
// - runtime clock ownership
// - RTC backend abstraction
// - DS3231 integration
// - NVS fallback persistence
// - date/time formatting helpers
//
// Controlled Through:
//
//   FORGEUI_RTC_BACKEND
//
// Runtime Model:
//
// ESP system time
//   -> active runtime clock
//
// DS3231
//   -> persistent hardware RTC
//
// NVS
//   -> fallback persistence layer
//
// Rules:
// - UI never owns time truth
// - runtime reads use ESP system time
// - DS3231 used at boot restore and set/apply
// - BSP owns I2C bus init
//
// ============================================================

// ============================================================
// Runtime RTC Init
// ============================================================

// Initialise runtime RTC system
void fg_rtc_init(void);

// ============================================================
// Runtime Time Access
// ============================================================

// Set runtime/system time
void fg_rtc_set(int year,
                int month,
                int day,
                int hour,
                int min);

// Get runtime/system time
void fg_rtc_get(int *year,
                int *month,
                int *day,
                int *hour,
                int *min,
                int *sec);

// ============================================================
// Format Helpers
// ============================================================

void fg_rtc_format_day(char *out, int max);

void fg_rtc_format_time(char *out, int max);

void fg_rtc_format_header(char *out, int max);

#ifdef __cplusplus
}
#endif