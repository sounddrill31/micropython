// https://www.adafruit.com/product/4884
// https://learn.adafruit.com/adafruit-feather-rp2040-pico/pinouts

#define MICROPY_HW_BOARD_NAME          "ADIY Fly Basic Board RP2040"
#define MICROPY_HW_FLASH_STORAGE_BYTES (3 * 1024 * 1024)

#define MICROPY_HW_USB_VID (0x239A)
#define MICROPY_HW_USB_PID (0x80F2)

// NeoPixel GPIO16, power not toggleable

// Red user LED GPIO13
