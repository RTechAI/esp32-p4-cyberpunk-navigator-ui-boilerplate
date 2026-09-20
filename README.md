# ESP32-P4 Navigator Night UI Boilerplate — ForgeUI One LVGL 9 Reference

![Navigator Night concept artwork](<Splash BoilerPlate_Navigator_Night.png>)

An ESP32-P4 embedded UI/HMI reference for the Waveshare ESP32-P4-WIFI6-Touch-LCD-7B: a 1024×600 LVGL 9 Navigator Night theme on an ESP-IDF 5.5.4 and ForgeUI One baseline.

This repository provides the **EV Fast Navigator Night** boilerplate: a single-page, Studio-exported LVGL interface and ESP32-P4 runtime baseline that developers can build, flash, and adapt for touchscreen HMI work. The hero image above is Navigator Night concept artwork, not a physical-hardware photograph or a runtime screenshot.

## ForgeUI Ecosystem

ForgeUI is developed by [RTechAI](https://github.com/RTechAI).

The [ForgeUI website](https://forgeui.co.nz) is the official home of the ForgeUI embedded UI/HMI development ecosystem.

ForgeUI Studio is the current visual embedded UI/HMI development environment for supported ESP32 hardware.

[ForgeUI Hosted Studio](https://studio.forgeui.co.nz) is the hosted, browser-based ForgeUI Studio application and is available for public registration.

RTechAI's GitHub organization hosts ForgeUI public repositories, hardware references, framework baselines, examples, and related open development work.

This repository is an RTechAI public ForgeUI technical reference that preserves a Navigator Night UI boilerplate on the earlier ForgeUI One runtime baseline.

## Overview

The project targets a real ESP32-P4 touchscreen board and boots the board support package, ForgeUI One runtime services, and an LVGL export. The exported UI renders a 1024×600 background, a live RTC clock, and Wi-Fi status/IP text; the runtime also contains configurable Wi-Fi, RTC, SD-card, and audio modules.

The source enables Wi-Fi, RTC, and SD storage by default. Audio support is present in the project but disabled by the current feature configuration.

## Hardware Target

| Item | Verified configuration |
| --- | --- |
| Board | Waveshare ESP32-P4-WIFI6-Touch-LCD-7B |
| MCU | Espressif ESP32-P4 |
| Display | 7-inch, 1024×600 MIPI DSI panel with EK79007 controller |
| Touch | GT911 capacitive touch controller |
| Wireless path | ESP-Hosted over SDIO to the board's ESP32-C6, using ESP Wi-Fi Remote |
| Retained clock | DS3231 on I²C (configured) |

The project configuration records a proven boot order for the enabled services: initialize hosted Wi-Fi before mounting the SD card. Repository documentation and configuration describe this board/runtime baseline as hardware-proven; no physical-validation photo is included here.

## Software Stack

| Layer | Verified version or component |
| --- | --- |
| SDK | ESP-IDF 5.5.4 |
| UI framework | LVGL 9.2.2 |
| LVGL integration | `espressif/esp_lvgl_port` 2.7.2 |
| Board support package | `waveshare/esp32_p4_wifi6_touch_lcd_7b` 1.0.2 |
| Display and touch drivers | `esp_lcd_ek79007` 1.0.4 and `esp_lcd_touch_gt911` 1.2.0~2 |
| Runtime lineage | ForgeUI One 1.0.0 |

## What This Project Demonstrates

- A native C, ESP-IDF project targeted at `esp32p4`.
- ForgeUI One startup, board display/touch initialization, and LVGL lifecycle management.
- The Navigator Night single-page visual treatment, with a generated 1024×600 artwork asset.
- Studio-export integration through `main/90_Studio_Export.c`.
- Hosted Wi-Fi status handling, DS3231 RTC formatting, and SD-card service modules.

This is a visual Navigator/EV HMI theme and firmware baseline. It does not implement navigation routing, vehicle control, or a complete EV application.

## UI / Theme

Navigator Night is the project-specific night-mode navigator concept. The exported screen uses a dark blue “Singularity” background, a bottom-right clock, and Wi-Fi status. The bundled splash artwork depicts a vehicle/cockpit navigation concept; it is generated/concept artwork rather than proof of a deployed interface.

## Hardware and Runtime Baseline

`main/main.c` owns boot sequencing and initializes the Waveshare BSP display, the ESP LVGL port, optional runtime services, and the generated Studio screen. `main/00_ForgeUI_Config.h` controls the enabled services and selects the ESP-Hosted Wi-Fi and DS3231 RTC backends. The UI export consumes service state without taking hardware ownership.

## Project Structure

```text
.
├── main/
│   ├── main.c                   # boot, BSP, and LVGL startup
│   ├── 00_ForgeUI_Config.h      # feature and backend configuration
│   ├── 20_RTC.c                 # DS3231 clock service
│   ├── 30_WIFI.c                # ESP-Hosted Wi-Fi service
│   ├── 40_SD.c                  # SD-card service
│   ├── 90_Studio_Export.c       # generated Navigator Night UI
│   └── assets/                  # LVGL icons, theme, and UI artwork
├── components/bsp_extra/        # board-specific audio helpers
├── docs/                        # setup captures and source assets
├── dependencies.lock            # locked managed-component versions
├── sdkconfig.defaults           # ESP-IDF target and LVGL defaults
└── partitions.csv               # flash partition layout
```

## Build and Flash

Install and export an ESP-IDF 5.5.4 environment, then run from the repository root:

```bash
idf.py set-target esp32p4
idf.py build
idf.py flash monitor
```

The board-specific managed components are declared in the component manifests and locked in `dependencies.lock`. Connect the intended Waveshare board before flashing.

## Historical ForgeUI Context

The project history identifies the initial release as the “EV Fast Navigator Night boiler plate.” Source comments identify `main/90_Studio_Export.c` as a ForgeUI Studio export, while the project configuration and documentation identify the embedded baseline as ForgeUI One and refer to the earlier ESP32-P4 UI Studio workflow. This is historical lineage for this repository; it does not imply that the project was generated by today’s ForgeUI Hosted Studio.

## Current ForgeUI Studio

[ForgeUI](https://forgeui.co.nz) is the official ForgeUI website. ForgeUI Studio is the current visual embedded UI/HMI development environment for supported ESP32 hardware.

[ForgeUI Hosted Studio](https://studio.forgeui.co.nz) is the hosted browser-based ForgeUI Studio application and is available for public registration.

## Related ForgeUI Projects

- [ForgeUI One](https://github.com/RTechAI/ForgeUI-One) — the historical embedded runtime lineage used by this boilerplate.
- [Historical ESP32-P4 UI Studio](https://github.com/RTechAI/esp32p4-ui-studio) — the earlier visual/export workflow referenced by this project.
- [ForgeUI P4](https://github.com/RTechAI/ForgeUI-P4) — related ESP32-P4 ForgeUI work.
- [ESP32-P4 LVGL Boilerplate 3](https://github.com/RTechAI/ESP32-P4-LVGL-Boilerplate-3) — another ESP32-P4 LVGL baseline from RTechAI.

## About ForgeUI

[ForgeUI](https://forgeui.co.nz) is developed by [RTechAI](https://github.com/RTechAI).

ForgeUI Studio provides visual embedded UI/HMI development workflows for supported ESP32 hardware, while [ForgeUI Hosted Studio](https://studio.forgeui.co.nz) provides the hosted browser-based Studio application.

RTechAI is the GitHub home for ForgeUI public repositories and reference work.

## License and Third-Party Software

This repository is licensed under the [ForgeUI Source Available License](LICENSE), not the MIT License. Review [THIRD_PARTY_LICENSES.md](THIRD_PARTY_LICENSES.md) for notices covering ESP-IDF, LVGL, Waveshare BSP components, and other integrated third-party software.

## Support

Use the [RTechAI GitHub organization](https://github.com/RTechAI) for related public ForgeUI work. For project contact information, see the repository history and source headers.
