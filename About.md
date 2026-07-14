# ForgeUI One Boiler Plate

**Hardware-proven single-page LVGL boiler plate for ESP32-P4 touchscreen projects.**

Built using **ESP32-P4 UI Studio**, this project provides a complete firmware baseline ready to build, flash, modify, and extend for real embedded products.

Current validated hardware:

- Waveshare ESP32-P4-WIFI6-Touch-LCD-7B (1024×600)
- ESP-IDF v5.5.x
- LVGL v9

---

# About This Boiler Plate

This repository is one of the official **ForgeUI One Boiler Plates**.

Each boiler plate contains:

- Complete ESP-IDF project
- Production-ready ForgeUI One runtime
- Professionally designed single-page HMI
- Hardware-proven firmware
- Clean starting point for your own applications

Simply clone, build, flash, customise, and create your own embedded product.

---

# Built With ESP32-P4 UI Studio

This project was designed and exported using **ESP32-P4 UI Studio**.

ESP32-P4 UI Studio is an open-source visual development environment for creating modern embedded interfaces without starting from a blank project.

Features include:

- Visual UI Designer
- AI-assisted UI generation
- AI Hero Theme generation
- Theme Manager
- Asset Manager
- Icon Browser
- LVGL code generation
- Standalone ESP-IDF project export
- Physical ESP32-P4 deployment

Development Pipeline:

```text
ESP32-P4 UI Studio
        │
        ▼
Visual Design
        │
        ▼
AI Assisted Design
        │
        ▼
ForgeUI One Runtime
        │
        ▼
ESP-IDF Build
        │
        ▼
Physical ESP32-P4 Hardware
```

---

# About ForgeUI One

ForgeUI One is the embedded runtime that powers every exported project from ESP32-P4 UI Studio.

It provides:

- Hardware initialization
- LVGL runtime management
- Display driver integration
- GT911 touch support
- ESP-Hosted WiFi
- RTC support
- SD Card support
- Audio subsystem support
- Theme system
- Modular runtime architecture
- Studio export integration

The generated UI is automatically inserted into the runtime and rendered directly on physical ESP32-P4 hardware.

---

# Why ForgeUI One?

Rather than beginning with a blank ESP-IDF project, ForgeUI One provides a stable, reusable, hardware-proven foundation allowing developers to focus on creating applications instead of configuring low-level hardware.

Every ForgeUI One Boiler Plate includes:

- Hardware-proven firmware
- Clean architecture
- Modular project structure
- Stable runtime
- Reusable components
- Single-page HMI ready for customisation

---

# Hardware Support

Validated on:

- Waveshare ESP32-P4-WIFI6-Touch-LCD-7B
- ESP32-P4
- EK79007 MIPI-DSI Display
- GT911 Capacitive Touch
- ESP32-C6 Hosted WiFi
- DS3231 RTC
- SD Card
- Audio subsystem

---

# Quick Start

Set the target:

```bash
idf.py set-target esp32p4
```

Build:

```bash
idf.py build
```

Flash:

```bash
idf.py flash monitor
```

---

# Current Status

```text
✔ PHYSICAL HARDWARE PROVEN

✔ ACTIVE DEVELOPMENT

✔ ESP32-P4 UI STUDIO COMPATIBLE

✔ FORGEUI ONE RUNTIME VERIFIED
```

---

# Project Philosophy

ForgeUI is built around one simple idea:

> **Create once. Export once. Flash once. Build real products.**

Every boiler plate is intended to be cloned, customised, and used as the starting point for commercial products, prototypes, dashboards, HMIs, kiosks, industrial controllers, and embedded touchscreen applications.

---

# Designed & Created By

## Scott Forster

## New Zealand

**Creator & Designer — ForgeUI**

Creator of:

- ESP32-P4 UI Studio
- ForgeUI One Runtime

📧 **forgeui.esp32@gmail.com**

GitHub:

https://github.com/RTechAI

---

# Support & Updates

If you build something with ForgeUI, have suggestions for new features, discover a bug, or simply want to share your project, I'd love to hear from you.

Feature requests, improvements, and community contributions are always welcome.

📧 **forgeui.esp32@gmail.com**

---

# License

ForgeUI One incorporates several outstanding open-source technologies including:

- ESP-IDF
- LVGL
- Waveshare BSP Components

Please refer to the accompanying **LICENSE** and **THIRD_PARTY_LICENSES.md** files for additional licensing information.

---

**Powered by ForgeUI**

*Building the next generation of open-source embedded UI tools for ESP32-P4.*

