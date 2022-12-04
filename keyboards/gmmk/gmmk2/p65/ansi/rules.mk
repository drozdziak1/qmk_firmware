# MCU name
MCU = WB32F3G71

# Bootloader selection
BOOTLOADER = wb32-dfu

# Build Options
#   change yes to no to disable
#
MIDI_ENABLE = no
SERIAL_ENABLE = no
BOOTMAGIC_ENABLE = yes       # Enable Bootmagic Lite.
MOUSEKEY_ENABLE = no        # Mouse keys.
EXTRAKEY_ENABLE = no        # Audio control and System control.
CONSOLE_ENABLE = no          # Console for debug.
COMMAND_ENABLE = no          # Commands for debug and configuration.
NKRO_ENABLE = no            # Enable NKRO Rollover.
BACKLIGHT_ENABLE = no        # Enable keyboard backlight functionality.
RGBLIGHT_ENABLE = no         # Enable keyboard RGB underglow.
AUDIO_ENABLE = no            # Audio output.
RGB_MATRIX_ENABLE = yes      # Enable RGB matrix effects.
RGB_MATRIX_DRIVER = AW20216  # Enable RGB matrix effects.
EEPROM_DRIVER = wear_leveling
WEAR_LEVELING_DRIVER = embedded_flash
