/*
 * olde.h
 *
 *  Created on: Jul 14, 2026
 *      Author: ningh
 */

#ifndef INC_OLDE_H_
#define INC_OLDE_H_

#include "i2c.h"

void OLED_Init();
void OLED_Test();
void OLED_NewFrame();
void OLED_ShowFrame();
void OLED_SetPixel(uint8_t x, uint8_t y);

#endif /* INC_OLDE_H_ */
