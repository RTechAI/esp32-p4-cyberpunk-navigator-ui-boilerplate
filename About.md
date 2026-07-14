# ForgeUI One Boiler Plate

**Hardware-proven single-page LVGL v9 UI boilerplate for ESP32-P4 touchscreen projects.**

Built natively using **ESP32-P4 UI Studio (ForgeUI Studio)**, this project provides a complete firmware baseline ready to build, flash, modify, and extend for real embedded products.

> **Create once. Export once. Flash once. Build real products.**

Current validated hardware:

- Waveshare ESP32-P4-WIFI6-Touch-LCD-7B (1024×600)
- ESP-IDF v5.5.x
- LVGL v9

---

# About This Boiler Plate

This repository is one of the official **ForgeUI One Boiler Plates**.

Each boilerplate contains:

- Complete ESP-IDF project structure
- Production-ready ForgeUI One runtime
- Professionally designed single-page **Cyberpunk Navigator** HMI
- Hardware-proven embedded runtime
- Clean, zero-bloat starting point for your own applications

Simply clone, build, flash, customise, and create your own embedded product.

---

# Why Boiler Plates?

Every ForgeUI Boiler Plate is a complete, hardware-proven embedded application showcasing a different user interface, design style, and embedded workflow.

Rather than starting from an empty ESP-IDF project, developers can clone a Boiler Plate, customise the interface, and immediately begin building their own embedded products.

Each Boiler Plate demonstrates the capabilities of **ESP32-P4 UI Studio** while providing a production-ready **ForgeUI One** runtime.

---

# Built With ESP32-P4 UI Studio

This project was visually designed and exported using the open-source **ESP32-P4 UI Studio** desktop application.

Repository:

https://github.com/RTechAI/esp32p4-ui-studio

ESP32-P4 UI Studio provides:

- Visual UI Designer & Canvas Builder
- AI-assisted prompt-to-layout generation
- AI Hero Theme generation
- Theme Manager
- Asset Manager
- Icon Browser
- LVGL v9 code generation
- Standalone ESP-IDF project export
- Direct deployment to ForgeUI One

Development Pipeline:

```text
ESP32-P4 UI Studio
        │
        ▼
Visual UI Design
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

# Powered by ForgeUI One

ForgeUI One is the embedded runtime powering every exported project from **ESP32-P4 UI Studio**.

Repository:

https://github.com/RTechAI/ForgeUI-One

It provides:

- ESP-IDF project structure
- LVGL v9 runtime
- EK79007 MIPI-DSI display integration
- GT911 capacitive touch support
- ESP-Hosted WiFi integration
- DS3231 RTC support
- SD Card support
- Audio subsystem support
- Theme management
- Modular runtime architecture
- Generated UI integration

Generated UI layouts are automatically inserted into the runtime and rendered directly on physical ESP32-P4 hardware.

---

# Why ForgeUI One?

Rather than beginning with a blank ESP-IDF project, ForgeUI One provides a stable, reusable, hardware-proven foundation allowing developers to focus on building applications instead of low-level hardware integration.

Every ForgeUI One Boiler Plate includes:

- Hardware-proven runtime
- Clean modular architecture
- Stable LVGL execution
- Reusable graphical components
- Single-page HMI templates
- Production-ready project structure

---

# Hardware Support

Validated on:

- Waveshare ESP32-P4-WIFI6-Touch-LCD-7B
- Espressif ESP32-P4
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

ForgeUI is built around one simple engineering principle:

> **Create once. Export once. Flash once. Build real products.**

Every ForgeUI Boiler Plate is intended to be cloned, customised, and used as the starting point for commercial products, industrial HMIs, dashboards, kiosks, automation systems, smart appliances, and embedded touchscreen applications.

---

# Designed & Created By

## Scott Forster

**Creator & Lead Architect — ForgeUI**

Projects include:

- ESP32-P4 UI Studio
- ForgeUI One Runtime
- Official ForgeUI Boiler Plates

📧 **Email**

forgeui.esp32@gmail.com

GitHub:

https://github.com/RTechAI

---

# Support

If you build something with ForgeUI, have suggestions for new features, discover a bug, or simply want to share your project, I'd love to hear from you.

Feature requests, improvements, and community contributions are always welcome.

📧 **forgeui.esp32@gmail.com**

---

# License

ForgeUI One incorporates several outstanding open-source technologies including:

- Espressif ESP-IDF
- LVGL v9
- Waveshare BSP Components

Please refer to:

- LICENSE
- THIRD_PARTY_LICENSES.md

for additional licensing information.

---

**Powered by ForgeUI**

*Building the next generation of open-source visual embedded UI development tools for ESP32-P4.*