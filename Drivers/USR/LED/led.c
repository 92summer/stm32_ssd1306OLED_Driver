#include "led.h"
#include "main.h"

void ledtest(void)
{
    LED_ON();
    LL_mDelay(500);
    LED_OFF();
}
