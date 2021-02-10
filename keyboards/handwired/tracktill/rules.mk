MCU = atmega32u4

# Elite C
BOOTLOADER = qmk-dfu

# Build Options
BOOTMAGIC_ENABLE = no
MOUSEKEY_ENABLE = yes
EXTRAKEY_ENABLE = no
CONSOLE_ENABLE = yes
COMMAND_ENABLE = no
SLEEP_LED_ENABLE = no
NKRO_ENABLE = no
BACKLIGHT_ENABLE = no
RGBLIGHT_ENABLE = no
UNICODE_ENABLE = no         # Unicode
BLUETOOTH_ENABLE = no       # Enable Bluetooth
AUDIO_ENABLE = no           # Audio output
POINTING_DEVICE_ENABLE = yes
MOUSEKEY_ENABLE = no        # Mouse keys

QUANTUM_LIB_SRC += spi_master.c
SRC += pmw/pmw.c
