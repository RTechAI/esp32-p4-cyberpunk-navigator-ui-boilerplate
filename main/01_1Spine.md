FORGEUI ONE P4 SPINE

SAVE POINT:
FORGEUI_STUDIO_TARGET_RUNTIME_MINIMAL_OK__RED_BG_TEXT_FLASH_PROVEN__2026-05-26

ROLE:
ForgeUI-One is now the minimal ESP32-P4 firmware runtime target for ESP32-P4 UI Studio.

It is not the UI app framework anymore.

OWNERSHIP:
Studio owns:
- UI layout
- colours
- widgets
- screens
- generated LVGL code
- asset selection and usage
- Firmware config owns hardware/runtime switches only.
- Studio owns all UI configuration.

ForgeUI-One owns:
- runtime asset library available to Studio
- ESP-IDF boot
- BSP display/touch start
- LVGL lifecycle
- hardware backend services
- generated export execution

ACTIVE FLOW:
app_main()
-> NVS init
-> BSP display start
-> backlight on
-> fg_runtime_init()
-> lv_screen_active()
-> lv_obj_clean(scr)
-> fg_studio_export_create(scr)
-> backend init/pump loop

ACTIVE FILES:
main.c
00_ForgeUI_Config.h
01_FG_Runtime.c
01_FG_Runtime.h
20_RTC.c/h
30_Audio.c/h
30_WIFI.c/h
40_SD.c/h
90_Studio_Export.c
90_Studio_Export.h
CMakeLists.txt
idf_component.yml
00_ForgeUI_Config.h = hardware/runtime config only

REMOVED FROM ACTIVE UI RUNTIME:
01_FG_HMI.c/h
02_UI_Home.c/h
05_FG_Icons.c/h
14_UI_Header.c/h
15_UI_Keyboard.c/h
16_UI_Style.c/h

RULE:
Studio generates.
Firmware obeys.
ESP32-P4 renders.

LOCK:
Do not reintroduce firmware-owned pages, headers, themes, icons, or app UI into this target unless deliberately creating a separate firmware profile.