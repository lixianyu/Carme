#pragma once

#define HAL_BOARD_NAME "mbed"
#define HAL_CPU_CLASS HAL_CPU_CLASS_150
#define HAL_STORAGE_SIZE            4096
#define HAL_STORAGE_SIZE_AVAILABLE  HAL_STORAGE_SIZE
#define HAL_INS_DEFAULT HAL_INS_MPU60XX_I2C
#define HAL_BARO_DEFAULT HAL_BARO_BMP085
#define HAL_COMPASS_DEFAULT HAL_COMPASS_HMC5843
#define CONFIG_HAL_BOARD_SUBTYPE HAL_BOARD_SUBTYPE_MBED_MK22

#define HAL_BARO_BMP085_BUS 10
#define HAL_BARO_BMP085_I2C_ADDR 0x77

#define HAL_COMPASS_HMC5843_I2C_BUS 1
#define HAL_COMPASS_HMC5843_I2C_ADDR 0x1E

#define HAL_INS_MPU60x0_I2C_BUS 2
#define HAL_INS_MPU60x0_I2C_ADDR 0x68