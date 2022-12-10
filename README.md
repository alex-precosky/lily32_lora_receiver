# Lily32 LoRa Receiver

# Prerequisites

- PlatformIO Core. [Installation instructions](https://docs.platformio.org/en/latest/core/installation/index.html)
- [LILYGO TTGO ESP32-Paxcounter LoRa32 V2.1 1.6](http://www.lilygo.cn/prod_view.aspx?TypeId=50003&Id=1130&FId=t3:50003:3)


Note that although PlatformIO is multi-platform, I've not had luck programming the above part with `esptool` on a VirtualBox Linux guest on a Windows host, or on macOS, possibly due to incompatibilities with the part's CH9102 USB-to-Serial chip. Future releases of macOS may resolve this. A native Linux or Windows host may be necessary.

# Setup

If using Linux or macOS:
```
export PATH=$PATH:~/.platformio/penv/bin
```

In Windows, add this to your PATH environment variable, or wherever you decided to install PlatformIO:
```
C:\Users\<windows username here>\.platformio\penv\Scripts
```

# Building

Run `pio run`. Expect to see:

```
$ pio run
Processing ttgo-lora32-v21 (platform: espressif32; board: ttgo-lora32-v21; framework: arduino)
--------------------------------------------------------------------------------
Verbose mode can be enabled via `-v, --verbose` option
CONFIGURATION: https://docs.platformio.org/page/boards/espressif32/ttgo-lora32-v21.html
PLATFORM: Espressif 32 (5.2.0) > TTGO LoRa32-OLED v2.1.6
HARDWARE: ESP32 240MHz, 320KB RAM, 4MB Flash
DEBUG: Current (cmsis-dap) External (cmsis-dap, esp-bridge, esp-prog, iot-bus-jtag, jlink, minimodule, olimex-arm-usb-ocd, olimex-arm-usb-ocd-h, olimex-arm-usb-tiny-h, olimex-jtag-tiny, tumpa)
PACKAGES:
 - framework-arduinoespressif32 @ 3.20005.220925 (2.0.5)
 - tool-esptoolpy @ 1.40201.0 (4.2.1)
 - toolchain-xtensa-esp32 @ 8.4.0+2021r2-patch3
LDF: Library Dependency Finder -> https://bit.ly/configure-pio-ldf
LDF Modes: Finder ~ chain, Compatibility ~ soft
Found 32 compatible libraries
Scanning dependencies...
No dependencies
Building in release mode
Retrieving maximum program size .pio\build\ttgo-lora32-v21\firmware.elf
Checking size .pio\build\ttgo-lora32-v21\firmware.elf
Advanced Memory Usage is available via "PlatformIO Home > Project Inspect"
RAM:   [=         ]   5.0% (used 16440 bytes from 327680 bytes)
Flash: [==        ]  18.6% (used 244161 bytes from 1310720 bytes)
========================= [SUCCESS] Took 2.63 seconds =========================
```

# Flashing

The following command will build the project and upload the flash image to the
device and start the program:

`pio run --target upload`

# Serial Debug Port

To interact with the device via the serial debug port on the USB-to-Serial interface, run:

`pio device monitor`

Expect to see debug output from the device.
