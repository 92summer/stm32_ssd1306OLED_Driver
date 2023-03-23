#ifndef __OLED_H
#define __OLED_H
#include "main.h"

#define OLED_CMD 0
#define OLED_DATA 1

#define OLED_RES_Clr() LL_GPIO_ResetOutputPin(OLED_RES_GPIO_Port, OLED_RES_Pin)//RES
#define OLED_RES_Set() LL_GPIO_SetOutputPin(OLED_RES_GPIO_Port, OLED_RES_Pin)

#define OLED_DC_Clr()  LL_GPIO_ResetOutputPin(OLED_DC_GPIO_Port, OLED_DC_Pin)//DC
#define OLED_DC_Set()  LL_GPIO_SetOutputPin(OLED_DC_GPIO_Port, OLED_DC_Pin)

#define OLED_CS_Clr()   LL_GPIO_ResetOutputPin(OLED_CS_GPIO_Port, OLED_CS_Pin)//CS
#define OLED_CS_Set()   LL_GPIO_SetOutputPin(OLED_CS_GPIO_Port, OLED_CS_Pin)

void OLED_Init(void);
void OLED_WR_Byte(uint8_t dat, uint8_t cmd);
void OLED_ColorTurn(uint8_t i);
void OLED_DisplayTurn(uint8_t i);
void OLED_DisPlay_On(void);
void OLED_DisPlay_Off(void);
void OLED_Refresh(void);
void OLED_Clear(void);

void OLED_DrawPoint(uint8_t x, uint8_t y, uint8_t t);
void OLED_DrawLine(uint8_t x1, uint8_t y1, uint8_t x2, uint8_t y2, uint8_t mode);
void OLED_DrawCircle(uint8_t x, uint8_t y, uint8_t r);

void OLED_ShowChar(uint8_t x, uint8_t y, uint8_t chr, uint8_t size1, uint8_t mode);
void OLED_ShowString(uint8_t x, uint8_t y, char *str, uint8_t size1, uint8_t mode);
void OLED_ShowNum(uint8_t x, uint8_t y, uint32_t num, uint8_t len, uint8_t size1, uint8_t mode);
void OLED_ShowChinese(uint8_t x, uint8_t y, uint8_t num, uint8_t size1, uint8_t mode);
void OLED_ScrollDisplay(uint8_t num, uint8_t space, uint8_t mode);
void OLED_ShowPicture(uint8_t x, uint8_t y, uint8_t sizex, uint8_t sizey, uint8_t BMP[], uint8_t mode);

// void OLED_Init_DMA(void);
void OLED_Refresh_DMA(void);

#endif
