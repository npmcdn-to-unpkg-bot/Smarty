#ifndef SMARTY_ICD_H
#define SMARTY_ICD_H

#define CONSTANT_PAYLOAD_SIZE	8
#define CONSTANT_CONTENT_SIZE	(CONSTANT_PAYLOAD_SIZE-2)

#define OPCODE_GENERIC_CMD					0xC0
#define OPCODE_SET_ANALOG_CMD				0xCA
#define OPCODE_SET_DIGITAL_CMD				0xCD
#define OPCODE_DC_MOTOR_CMD					0xE0

#define OPCODE_SENSORS_DATA_REPORT			0xD0
#define NUM_ANALOGS_IN_DATA_REPORT			6

#define OPCODE_BUTTON_PUSHED_REPORT			0xD1

#define OPCODE_DEBUG_MESSAGE_REPORT			0xDD

#define GATEWAY_ADDRESS		0x00
#define BROADCAST_ADDRESS	0xFF

#define MAIN_RX_PIPE		1
#define BROADCAST_RX_PIPE	2

#define MAX_DEBUG_BUFFER	80

typedef struct Message
{
  uint8_t   m_smartyID;
  uint8_t   m_opcode;
  uint8_t   m_params[CONSTANT_CONTENT_SIZE];
};

#endif

