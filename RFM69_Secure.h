// **********************************************************************************
// Library for Secure wireless communications of Moteinos using an RFM69 transceiver
// **********************************************************************************
// Hardware requirements:
//   - Moteino or Moteino compatible board
// Library requirements:
//   - RFM69      - get library at: https://github.com/LowPowerLab/RFM69
//   - SHA3       - get library at: https://github.com/rweather/arduinolibs/tree/master/libraries/Crypto
// **********************************************************************************
// License
// **********************************************************************************
// TODO
// **********************************************************************************
#ifndef RFM69_SECURE_H
#define RFM69_SECURE_H

#include "RFM69.h"

virtual void secureSend(uint16_t toAddress, const void* buffer, uint8_t bufferSize, bool requestACK=false);
virtual bool secureSendWithRetry(uint16_t toAddress, const void* buffer, uint8_t bufferSize, uint8_t retries=2, uint8_t retryWaitTime=RFM69_ACK_TIMEOUT);
virtual bool secureReceiveDone();

#endif
