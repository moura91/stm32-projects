/*
 * i2c_nunchuk.h
 *
 *  Created on: Oct 20, 2025
 *      Author: tiago
 */

#ifndef I2C_NUNCHUK_H_
#define I2C_NUNCHUK_H_

#include "stm32f4xx_hal.h"

typedef struct {
    uint8_t joy_x;
    uint8_t joy_y;
    uint16_t acc_x;
    uint16_t acc_y;
    uint16_t acc_z;
    uint8_t btn_c;
    uint8_t btn_z;
} NunchukData;

HAL_StatusTypeDef Nunchuk_Init(I2C_HandleTypeDef *hi2c);
HAL_StatusTypeDef Nunchuk_ReadData(I2C_HandleTypeDef *hi2c, NunchukData *data);

#endif /* INC_I2C_NUNCHUK_H_ */
