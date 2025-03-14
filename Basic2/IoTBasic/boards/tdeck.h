i/* 
 *  The Liligo T-Deck configuration
 *    supports the internal FFAT right now, SD not yet done
 */
/* these are the PIN definition from Lilygos utilities.h file */
#define BOARD_POWERON       10
#define BOARD_I2S_WS        5
#define BOARD_I2S_BCK       7
#define BOARD_I2S_DOUT      6
#define BOARD_I2C_SDA       18
#define BOARD_I2C_SCL       8
#define BOARD_BAT_ADC       4
#define BOARD_TOUCH_INT     16
#define BOARD_KEYBOARD_INT  46
#define BOARD_SDCARD_CS     39
#define BOARD_TFT_CS        12
#define RADIO_CS_PIN        9
#define BOARD_TFT_DC        11
#define BOARD_TFT_BACKLIGHT 42
#define BOARD_SPI_MOSI      41
#define BOARD_SPI_MISO      38
#define BOARD_SPI_SCK       40
#define BOARD_TBOX_G02      2
#define BOARD_TBOX_G01      3
#define BOARD_TBOX_G04      1
#define BOARD_TBOX_G03      15
#define BOARD_ES7210_MCLK   48
#define BOARD_ES7210_LRCK   21
#define BOARD_ES7210_SCK    47
#define BOARD_ES7210_DIN    14
#define RADIO_BUSY_PIN      13
#define RADIO_RST_PIN       17
#define RADIO_DIO1_PIN      45
#define BOARD_BOOT_PIN      0
#define BOARD_BL_PIN        42
#define BOARD_GPS_TX_PIN    43
#define BOARD_GPS_RX_PIN    44
#ifndef RADIO_FREQ
#define RADIO_FREQ           868.0
#endif
#ifndef RADIO_BANDWIDTH
#define RADIO_BANDWIDTH      125.0
#endif
#ifndef RADIO_SF
#define RADIO_SF             10
#endif
#ifndef RADIO_CR
#define RADIO_CR             6
#endif
#ifndef RADIO_TX_POWER
#define RADIO_TX_POWER       22
#endif
#define DEFAULT_OPA          100
/* and now the BASIC stuff begins */
/* either use the buildin FAT as a file system */
#undef ESP32FAT
/* or the SD card */
#define ARDUINOSD
#define SDPIN BOARD_SDCARD_CS
/* the display */
#define TFTESPI
#define DISPLAYCANSCROLL
/*the keyboard */
#define ARDUINOI2CKBD
#define SDA_PIN BOARD_I2C_SDA
#define SCL_PIN BOARD_I2C_SCL
#define I2CKBDADDR 0x55
/* can run standalone now */
#define STANDALONE
