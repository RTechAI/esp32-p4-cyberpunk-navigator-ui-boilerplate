#pragma once

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

// ============================================================
// ForgeUI One SD Storage System
// ============================================================
//
// File:
// 40_SD.h
//
// Created by:
// Scott Forster
//
// Contact:
// forgeui.esp32@gmail.com
//
// Purpose:
// Shared SD card and filesystem backend.
//
// Features:
// - SD mount/init
// - SD read/write test
// - ForgeUI folder structure
// - storage reset/rebuild
// - folder listing
// - runtime status helpers
//
// Runtime Model:
// - backend owns SD state
// - UI sends intent only
// - backend owns filesystem lifecycle
//
// Important Hardware Truth:
//
// Hosted WiFi and SDMMC share hardware paths.
//
// Current proven stable boot order:
//
//   WiFi first
//   -> SD second
//
// Rules:
// - backend only
// - no LVGL ownership
// - no UI styling
// - no direct UI dependencies
// - no workflow ownership
//
// ============================================================

// ============================================================
// Core
// ============================================================

// Initialise SD backend
bool fg_sd_init(void);

// Simple SD read/write validation test
bool fg_sd_test(void);

// ============================================================
// Status Helpers
// ============================================================

bool fg_sd_is_ready(void);

const char *fg_sd_status_text(void);

const char *fg_sd_last_action_text(void);

const char *fg_sd_size_text_get(void);

// ============================================================
// Storage Actions
// ============================================================

// Create ForgeUI folder structure
bool fg_sd_create_folders(void);

// Write simple boot marker file
bool fg_sd_write_boot_marker(void);

// Async reset task helper
bool fg_sd_reset_async(void);

// ============================================================
// Fast Storage Reset
// ============================================================
//
// Fast app-level reset.
//
// Deletes:
//
//   /sdcard/ForgeUI
//
// Rebuilds:
//
//   clean ForgeUI folder structure
//
// Does NOT:
// - full-format the SD card
// - remount storage
//
// ============================================================

bool fg_sd_reset_storage_blocking(void);

// ============================================================
// Folder / File View
// ============================================================

// List ForgeUI root folders/files
bool fg_sd_list_forgeui(char *out,
                        int out_len);

#ifdef __cplusplus
}
#endif