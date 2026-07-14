# ============================================================
# ForgeUI One
# ============================================================
# ESP-IDF Project Root
#
# Target:
#   ESP32-P4-WIFI6-Touch-LCD-7B
#
# Framework:
#   ForgeUI One
#
# Purpose:
# - Single-page all-alive ESP32-P4 baseline
# - Display, touch, audio, Wi-Fi, and internet RTC
# - Clean starting point for future ForgeUI builds
# ============================================================

cmake_minimum_required(VERSION 3.5)

include($ENV{IDF_PATH}/tools/cmake/project.cmake)

add_compile_options(-Wno-format)
add_compile_options(-Wno-ignored-qualifiers)
add_compile_options(-Wno-attributes)
add_compile_options(-Wno-unused-function)

project(ForgeUI_One)