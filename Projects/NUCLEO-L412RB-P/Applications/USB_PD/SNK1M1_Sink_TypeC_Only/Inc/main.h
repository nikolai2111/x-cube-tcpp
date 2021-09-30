/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */
typedef enum {
  DPM_USER_EVENT_TIMER,         
  DPM_USER_EVENT_DETACH, 
  DPM_USER_EVENT_EXPLICIT_CONTRACT,
  DPM_USER_EVENT_NOPD_DEFAULT, 
  DPM_USER_EVENT_NOPD_1P5A, 
  DPM_USER_EVENT_NOPD_3P0A, 
} DPM_USER_EVENT;

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */
void Check_TypeC_Connection(void);

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define ADC_VBUS_Pin GPIO_PIN_2
#define ADC_VBUS_GPIO_Port GPIOC
#define CC1_no_UCPD_Pin GPIO_PIN_0
#define CC1_no_UCPD_GPIO_Port GPIOA
#define CC2_no_UCPD_Pin GPIO_PIN_1
#define CC2_no_UCPD_GPIO_Port GPIOA
#define VCC_OUT_Pin GPIO_PIN_10
#define VCC_OUT_GPIO_Port GPIOC
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/