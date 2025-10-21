#include "i2c_nunchuk.h"

#define NUNCHUK_ADDR (0x52 << 1)

HAL_StatusTypeDef Nunchuk_Init(I2C_HandleTypeDef *hi2c) {
    uint8_t init[2] = {0x40, 0x00};

    if (HAL_I2C_Master_Transmit(hi2c, NUNCHUK_ADDR, init, 2, HAL_MAX_DELAY) != HAL_OK)
        return HAL_ERROR;
    HAL_Delay(10);

    return HAL_OK;
}

HAL_StatusTypeDef Nunchuk_ReadData(I2C_HandleTypeDef *hi2c, NunchukData *data) {
    uint8_t cmd = 0x00;
    uint8_t buf[6];

    if (HAL_I2C_Master_Transmit(hi2c, NUNCHUK_ADDR, &cmd, 1, HAL_MAX_DELAY) != HAL_OK)
        return HAL_ERROR;
    HAL_Delay(3);
    if (HAL_I2C_Master_Receive(hi2c, NUNCHUK_ADDR, buf, 6, HAL_MAX_DELAY) != HAL_OK)
        return HAL_ERROR;

    data->joy_x = buf[0];
    data->joy_y = buf[1];
    data->acc_x = (buf[2] << 2) | ((buf[5] >> 2) & 0x03);
    data->acc_y = (buf[3] << 2) | ((buf[5] >> 4) & 0x03);
    data->acc_z = (buf[4] << 2) | ((buf[5] >> 6) & 0x03);
    data->btn_c = !(buf[5] & 0x02);
    data->btn_z = !(buf[5] & 0x01);

    return HAL_OK;
}
