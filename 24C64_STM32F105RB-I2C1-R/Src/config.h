// Copyright (c) 2020 Alexandr Kolodkin <alexandr.kolodkin@gmail.com>
// All rights reserved.


#ifndef CONFIG_H_
#define CONFIG_H_

#include <stdint.h>

#define KBIT2BYTES(x)  (x*1024/8)

#define CONFIG_EEPROM_SIZE         ((uint32_t) KBIT2BYTES(64))
#define CONFIG_EEPROM_PAGE_SIZE    ((uint32_t) 32)
#define CONFIG_EEPROM_ADDRESS      ((uint8_t) 0xA0)

// I2C port definitions
#define IOE_I2C                          I2C2
#define IOE_I2C_CLK                      RCC_APB1Periph_I2C2
#define IOE_I2C_SCL_PIN                  GPIO_Pin_10
#define IOE_I2C_SCL_GPIO_PORT            GPIOB
#define IOE_I2C_SCL_GPIO_CLK             RCC_APB2Periph_GPIOB
#define IOE_I2C_SDA_PIN                  GPIO_Pin_11
#define IOE_I2C_SDA_GPIO_PORT            GPIOB
#define IOE_I2C_SDA_GPIO_CLK             RCC_APB2Periph_GPIOB
#define IOE_I2C_DR                       ((uint32_t)0x40005810)
#define IOE_I2C_SPEED                    300000

#define I2C_REQUEST_WRITE                0x00
#define I2C_REQUEST_READ                 0x01

#endif /* CONFIG_H_ */
