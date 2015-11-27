/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : GPIO.h
**     Project     : HEXIWEAR_OLED
**     Processor   : MK64FN1M0VDC12
**     Component   : fsl_gpio
**     Version     : Component 1.2.0, Driver 01.00, CPU db: 3.00.000
**     Repository  : KSDK 1.2.0
**     Compiler    : GNU C Compiler
**     Date/Time   : 2015-11-27, 13:18, # CodeGen: 19
**     Contents    :
**         GPIO_DRV_Init                - void GPIO_DRV_Init(const gpio_input_pin_user_config_t * inputPins,const...
**         GPIO_DRV_InputPinInit        - void GPIO_DRV_InputPinInit(const gpio_input_pin_user_config_t * inputPin);
**         GPIO_DRV_OutputPinInit       - void GPIO_DRV_OutputPinInit(const gpio_output_pin_user_config_t * outputPin);
**         GPIO_DRV_GetPinDir           - gpio_pin_direction_t GPIO_DRV_GetPinDir(uint32_t pinName);
**         GPIO_DRV_SetPinDir           - void GPIO_DRV_SetPinDir(uint32_t pinName,gpio_pin_direction_t direction);
**         GPIO_DRV_WritePinOutput      - void GPIO_DRV_WritePinOutput(uint32_t pinName,uint32_t output);
**         GPIO_DRV_SetPinOutput        - void GPIO_DRV_SetPinOutput(uint32_t pinName);
**         GPIO_DRV_ClearPinOutput      - void GPIO_DRV_ClearPinOutput(uint32_t pinName);
**         GPIO_DRV_TogglePinOutput     - void GPIO_DRV_TogglePinOutput(uint32_t pinName);
**         GPIO_DRV_ReadPinInput        - uint32_t GPIO_DRV_ReadPinInput(uint32_t pinName);
**         GPIO_DRV_SetDigitalFilterCmd - void GPIO_DRV_SetDigitalFilterCmd(uint32_t pinName,bool isDigitalFilterEnabled);
**         GPIO_DRV_IsPinIntPending     - bool GPIO_DRV_IsPinIntPending(uint32_t pinName);
**         GPIO_DRV_ClearPinIntFlag     - void GPIO_DRV_ClearPinIntFlag(uint32_t pinName);
**
**     Copyright : 1997 - 2015 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file GPIO.h
** @version 01.00
*/         
/*!
**  @addtogroup GPIO_module GPIO module documentation
**  @{
*/         

#ifndef __GPIO_H
#define __GPIO_H

/* MODULE GPIO. */

/* Include inherited beans */
#include "clkManager.h"
#include "fsl_gpio_driver.h"



/*! @brief Configuration structure 0 for output pins */
extern const gpio_output_pin_user_config_t OLED_cfg[];
/*! @brief Configuration structure 1 for output pins */
extern const gpio_output_pin_user_config_t FLASH_cfg[];
/*! @brief Configuration structure 2 for output pins */
extern const gpio_output_pin_user_config_t PWR_cfg[];

/*! @brief Pin names */
enum _GPIO_pinNames{
  OLED_CS = GPIO_MAKE_PIN(GPIOB_IDX, 20U),
  OLED_RST = GPIO_MAKE_PIN(GPIOE_IDX, 6U),
  OLED_DC = GPIO_MAKE_PIN(GPIOD_IDX, 15U),
  FLASH_CS = GPIO_MAKE_PIN(GPIOD_IDX, 4U),
  PWR_HR = GPIO_MAKE_PIN(GPIOA_IDX, 29U),
  PWR_SENSORS_NF = GPIO_MAKE_PIN(GPIOB_IDX, 12U),
  PWR_OLED = GPIO_MAKE_PIN(GPIOC_IDX, 13U),
};

  
#endif

/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
