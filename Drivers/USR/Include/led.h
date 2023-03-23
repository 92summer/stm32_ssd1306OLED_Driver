#ifndef __LED_H
#define __LED_H

#define LED_ON() LL_GPIO_ResetOutputPin(LED_GPIO_Port, LED_Pin)
#define LED_OFF() LL_GPIO_SetOutputPin(LED_GPIO_Port, LED_Pin)

void ledtest(void);

#endif
