/* Eylike SS aka HC5661 clone */

#define BOARD_PID		"HC5661-v2"
#define BOARD_NAME		"HC5661-v2"
#define BOARD_DESC		"Eylike SS aka HC5661 clone"
#define BOARD_VENDOR_NAME	"Eylike"
#define BOARD_VENDOR_URL	"https://Eylike.com/"
#define BOARD_MODEL_URL		"https://Eylike.com/HC5661-v2"
#define BOARD_BOOT_TIME		25
#define BOARD_FLASH_TIME	120
#define BOARD_GPIO_BTN_RESET	12
#undef BOARD_GPIO_BTN_WPS	
#define BOARD_GPIO_BTN_ROUTER	1
#undef  BOARD_GPIO_LED_ALL
#undef  BOARD_GPIO_LED_WIFI
#define BOARD_GPIO_LED_SW2G	72	/* soft-blink led (11: green, 13: orange) */
#undef BOARD_GPIO_LED_SW5G
#define BOARD_GPIO_LED_POWER	9
#undef  BOARD_GPIO_LED_LAN
#undef BOARD_GPIO_LED_WAN
#define BOARD_GPIO_LED_USB	7
#undef  BOARD_GPIO_LED_ROUTER
#undef BOARD_GPIO_PWR_USB
#define BOARD_GPIO_PWR_USB_ON	1	/* 1: 5V Power ON, 0: 5V Power OFF */
#define BOARD_HAS_5G_11AC	0
#define BOARD_NUM_ANT_5G_TX	0
#define BOARD_NUM_ANT_5G_RX	0
#define BOARD_NUM_ANT_2G_TX	2
#define BOARD_NUM_ANT_2G_RX 2
#define BOARD_NUM_ETH_LEDS	1
#define BOARD_HAS_EPHY_L1000 0
#define BOARD_HAS_EPHY_W1000 0
