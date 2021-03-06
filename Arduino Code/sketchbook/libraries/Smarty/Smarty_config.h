#ifndef SMARTY_CONFIG_H
#define SMARTY_CONFIG_H

#define USE_EEPROM			0

// hardware types
#define HW_ARDUINO_UNO		1
#define HW_ARDUINO_NANO		2
#define HW_ARDUINO_ETH		3
#define HW_DAVIDUINO		4
#define HW_SMARTY_M328_V1	5
#define HW_SMARTY_T84_V1	6
#define HW_SMARTY_T85_V1	7

//#define __AVR_ATtiny84__
//#define __AVR_ATtiny85__

#define NUM_HW_PINS 10
#define NUM_SW_VALS 10

#define EEPROM_HEADER1 0xEE
#define EEPROM_HEADER2 0xA1

#endif

