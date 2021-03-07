/*
 * LED.h
 *
 *  Created on: 2021. 3. 7.
 *      Author: anton
 */

#ifndef SRC_HW_CORE_LED_H_
#define SRC_HW_CORE_LED_H_

#include "hw_def.h"


void ledInit(void);
void ledOn(uint8_t ch);
void ledOff(uint8_t ch);
void ledToggle(uint8_t ch);

#endif /* SRC_HW_CORE_LED_H_ */
