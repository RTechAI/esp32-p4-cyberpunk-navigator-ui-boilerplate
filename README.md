README

# ForgeUI One

> **ForgeUI One is the official embedded runtime for ESP32-P4 UI Studio exports and the foundation for all official ForgeUI Boiler Plates.**

Lightweight LVGL v9 starter framework and ESP-IDF runtime baseline for ESP32-P4 hardware.

ForgeUI One provides a clean, hardware-proven embedded UI starting point for developers building touchscreen projects using **ESP-IDF** and **LVGL v9**.

Current validated target hardware:

- Waveshare ESP32-P4-WIFI6-Touch-LCD-7B

---

# What is ForgeUI One?

ForgeUI One is intentionally designed as a minimal, stable, reusable ESP32-P4 runtime foundation.

The goal is simple:

```text
boot fast
stay clean
stay readable
provide a stable starting point
```

ForgeUI One intentionally strips away large demo complexity and focuses on:

- clean startup
- stable display bring-up
- touch integration
- LVGL v9 runtime stability
- simple UI structure
- reusable architecture
- fast experimentation
- readable project layout
- hardware-proven runtime behavior

---

# Official ForgeUI Boiler Plates

ForgeUI One powers every official **ForgeUI Boiler Plate**.

Each boiler plate provides:

- Hardware-proven firmware
- Production-ready single-page HMI
- Clean project structure
- ESP-IDF build environment
- LVGL v9 runtime
- Ready for customisation and extension

Boiler Plates are designed to accelerate development by providing complete working examples that can be cloned, modified, and used as the starting point for real embedded products.

---

# Current Features

Current ForgeUI One runtime baseline includes:

- LVGL v9 runtime
- Display operational
- Touch operational
- Single-page UI shell
- Clean starter home screen
- Modular source structure
- ESP-IDF integration
- Waveshare BSP integration
- Generated UI insertion path
- ESP32-P4 UI Studio export compatibility
- Hardware-tested runtime pipeline

---

# Runtime Role Inside ESP32-P4 UI Studio

ForgeUI One operates as the embedded firmware runtime within the larger **ESP32-P4 UI Studio** ecosystem.

Development pipeline:

```text
ESP32-P4 UI Studio
        │
        ▼
Visual UI Design
        │
        ▼
LVGL Code Generation
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

ForgeUI One intentionally owns:

- ESP-IDF project structure
- LVGL runtime lifecycle
- BSP integration
- Display, touch and audio setup
- Runtime application shell
- Generated UI insertion points

The visual editor and export pipeline remain intentionally separated from the embedded runtime.

---

# Design Philosophy

ForgeUI One favors:

- Simplicity
- Readability
- Maintainability
- Rapid experimentation
- Fast hardware bring-up
- Clean foundations
- Modular runtime ownership

ForgeUI One intentionally avoids:

- Bloated demo systems
- Tangled runtime ownership
- Unnecessary abstraction layers
- Hidden framework behaviour
- Oversized UI architectures

---

# Target Use Cases

ForgeUI One is intended for:

- New ESP32-P4 projects
- LVGL learning
- Touchscreen experiments
- Kiosk systems
- Embedded products
- Industrial HMIs
- Dashboard interfaces
- Games
- Proof-of-concept firmware
- Hardware testing
- Rapid prototyping
- ESP32-P4 UI Studio generated projects

---

# Hardware Support

Current proven hardware support includes:

- ESP32-P4
- EK79007 Display Controller
- GT911 Capacitive Touch
- Waveshare ESP32-P4-WIFI6-Touch-LCD-7B

---

# Software Stack

Built using:

- ESP-IDF v5.5.x
- LVGL v9
- Waveshare BSP ecosystem
- Espressif managed components

---

# Project Structure

Current runtime structure:

```text
ForgeUI-One/
├── main/
├── managed_components/
├── CMakeLists.txt
├── sdkconfig
└── README.md
```

Important runtime files include:

```text
main/
├── 01_FG_HMI.c
├── 02_UI_Home.c
├── 14_UI_Header.c
├── 90_Studio_Export.c
└── 90_Studio_Export.h
```

---

# ESP32-P4 UI Studio Integration

ForgeUI One supports direct export integration from **ESP32-P4 UI Studio**.

Generated UI files are automatically injected into:

```text
main/90_Studio_Export.c
main/90_Studio_Export.h
```

The runtime compiles and renders the generated LVGL interface directly on physical hardware.

This complete workflow has been physically validated on the ESP32-P4 platform.

---

# Quick Start

Set target:

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
✔ ACTIVE DEVELOPMENT

✔ HARDWARE PROVEN

✔ STUDIO EXPORT VERIFIED

✔ PHYSICAL ESP32-P4 DEPLOYMENT VERIFIED
```

Current milestone:

```text
ESP32-P4 UI Studio
        │
        ▼
ForgeUI One Runtime
        │
        ▼
Physical Hardware

Pipeline Proven
```

---

# License

ForgeUI One includes components and dependencies licensed under their respective open-source licences.

Key integrated technologies include:

- ESP-IDF
- LVGL
- Waveshare BSP Components

Please review:

- LICENSE
- THIRD_PARTY_LICENSES.md

---

# Developed By

## Scott Forster

**Creator of ForgeUI**

Projects include:

- ESP32-P4 UI Studio
- ForgeUI One Runtime
- Official ForgeUI Boiler Plates

📧 **Email**

forgeui.esp32@gmail.com

**GitHub**

https://github.com/RTechAI

---

# Support

If you build something with ForgeUI, discover a bug, have an idea for a feature, or simply want to share your project, I'd love to hear from you.

Community feedback helps shape future releases of ForgeUI.

📧 **forgeui.esp32@gmail.com**

---

**Powered by ForgeUI**

*Building the next generation of open-source embedded UI tools for ESP32-P4.*