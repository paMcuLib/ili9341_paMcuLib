#include "pa_ILI9341.drv_inline.inc.h"

inline void setCS(uint8_t state)
{
}
inline void setDC(uint8_t state)
{
}
inline void setRST(uint8_t state)
{
}
inline void delayMs(uint32_t ms)
{
    _G_paBase.delayMs(ms);
}
inline void transmit(char spiId, unsigned char *data, unsigned int len)
{
    _G_paSPI.transmit(spiId, data, len);
}