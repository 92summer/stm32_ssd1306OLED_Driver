#include "main.h"
#include "usart1.h"

void uart1_print_str(const char *str)
{
    LL_DMA_DisableChannel(DMA1, LL_DMA_CHANNEL_4);
    LL_DMA_ConfigAddresses(DMA1, LL_DMA_CHANNEL_4, (uint32_t)str, LL_USART_DMA_GetRegAddr(USART1), LL_DMA_DIRECTION_MEMORY_TO_PERIPH);
    LL_DMA_SetDataLength(DMA1, LL_DMA_CHANNEL_4, strlen(str));
    LL_DMA_EnableChannel(DMA1, LL_DMA_CHANNEL_4);
}
