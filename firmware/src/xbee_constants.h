#ifndef __AT_VALUES_H
#define __AT_VALUES_H


#define RX_START            0x7E
#define UART_RX_WAITING     0x00
#define UART_RX_ON          0x01

#define RX_START_POS        0
#define LEN_HB_POS          1
#define LEN_LB_POS          2
#define API_ID_POS          3
#define FRAME_ID_POS        4
#define DEST_ADDR_HB_POS    5
#define DEST_ADDR_LB_POS    6
#define OPTION_POS          7

#define RX_FRAME_OFFSET     8
#define RX_DATA_OFFSET      4 //Offset for accounting for RX_START, LEN_HB/LB bytes, and API ID
#define FRAME_HEADER_LEN    5

//These are transmit modes for the xbee
#define AT_COMMAND_MODE     0x08
#define TX_16BIT            0x01

//These are various parameters of the xbee
#define AT_CHANNEL          0x4348  //CH
#define AT_PAN_ID           0x4944  //ID
#define AT_SRC_ADR          0x4D59  //MY
#define AT_ACK_LAST         0x4541  //EA

//These are the response modes of the xbee
#define AT_RESPONSE         0x88
#define ATR_API_POS         0
#define ATR_FRAME_ID_POS    1
#define ATR_COMMAND_HB_POS  2
#define ATR_COMMAND_LB_POS  3
#define ATR_STATUS_POS      4

#define RX_16BIT            0x81
#define RX_API_POS          0
#define RX_SRC_ADR_HB_POS   1
#define RX_SRC_ADR_LB_POS   2
#define RX_RSSI_POS         3
#define RX_OPTIONS_POS      4


#endif
