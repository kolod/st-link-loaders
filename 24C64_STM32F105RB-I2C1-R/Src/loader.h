// Copyright (c) 2020 Alexandr Kolodkin <alexandr.kolodkin@gmail.com>
// All rights reserved.


#ifndef __MAIN_H
#define __MAIN_H

// Includes
#include "stm32f1xx.h"
#include "stm32f1xx_ll_i2c.h"
#include "stm32f1xx_ll_rcc.h"
#include "stm32f1xx_ll_bus.h"
#include "stm32f1xx_ll_system.h"
#include "stm32f1xx_ll_exti.h"
#include "stm32f1xx_ll_cortex.h"
#include "stm32f1xx_ll_utils.h"
#include "stm32f1xx_ll_pwr.h"
#include "stm32f1xx_ll_dma.h"
#include "stm32f1xx_ll_gpio.h"

// Exported functions prototypes
void Error_Handler(void);

#endif // __MAIN_H
