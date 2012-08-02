#ifndef __XBEE_HANDLER_H
#define __XBEE_HANDLER_H


void xbeeHandleAt(Payload rx_pld);
void xbeeHandleTx(Payload rx_pld);
void xbeeHandleRx(void);
void xbeeHandleATR(unsigned char frame_id, WordVal command, unsigned char *data, unsigned char length);
void sendUART(unsigned char *frame_header, unsigned char *data, unsigned char length);



#endif
