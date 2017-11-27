/*
 * led_driver.h
 *
 *  Created on: Nov 26, 2017
 *      Author: ptracton
 */

#ifndef LED_DRIVER_H_
#define LED_DRIVER_H_


/**
 * @brief LED Types Definition
 */
typedef enum
{
  LED3 = 0,
  LED4 = 1,
  LED5 = 2,
  LED6 = 3,
  LED7 = 4,
  LED8 = 5,
  LED9 = 6,
  LED10 = 7,

  LED_GREEN  = LED6,
  LED_ORANGE = LED5,
  LED_RED    = LED3,
  LED_BLUE   = LED4,
  LED_GREEN_2  = LED7,
  LED_ORANGE_2 = LED8,
  LED_RED_2    = LED10,
  LED_BLUE_2   = LED9
}Led_TypeDef;

/** @defgroup STM32F3_DISCOVERY_LED STM32F3-DISCOVERY LED
  * @{
  */
#define LEDn                             8

#define LED6_PIN                         GPIO_PIN_15
#define LED6_GPIO_PORT                   GPIOE
#define LED6_GPIO_CLK_ENABLE()           __HAL_RCC_GPIOE_CLK_ENABLE()
#define LED6_GPIO_CLK_DISABLE()          __HAL_RCC_GPIOE_CLK_DISABLE()

#define LED8_PIN                         GPIO_PIN_14
#define LED8_GPIO_PORT                   GPIOE
#define LED8_GPIO_CLK_ENABLE()           __HAL_RCC_GPIOE_CLK_ENABLE()
#define LED8_GPIO_CLK_DISABLE()          __HAL_RCC_GPIOE_CLK_DISABLE()

#define LED10_PIN                        GPIO_PIN_13
#define LED10_GPIO_PORT                  GPIOE
#define LED10_GPIO_CLK_ENABLE()           __HAL_RCC_GPIOE_CLK_ENABLE()
#define LED10_GPIO_CLK_DISABLE()          __HAL_RCC_GPIOE_CLK_DISABLE()

#define LED9_PIN                         GPIO_PIN_12
#define LED9_GPIO_PORT                   GPIOE
#define LED9_GPIO_CLK_ENABLE()           __HAL_RCC_GPIOE_CLK_ENABLE()
#define LED9_GPIO_CLK_DISABLE()          __HAL_RCC_GPIOE_CLK_DISABLE()

#define LED7_PIN                         GPIO_PIN_11
#define LED7_GPIO_PORT                   GPIOE
#define LED7_GPIO_CLK_ENABLE()           __HAL_RCC_GPIOE_CLK_ENABLE()
#define LED7_GPIO_CLK_DISABLE()          __HAL_RCC_GPIOE_CLK_DISABLE()

#define LED5_PIN                         GPIO_PIN_10
#define LED5_GPIO_PORT                   GPIOE
#define LED5_GPIO_CLK_ENABLE()           __HAL_RCC_GPIOE_CLK_ENABLE()
#define LED5_GPIO_CLK_DISABLE()          __HAL_RCC_GPIOE_CLK_DISABLE()

#define LED3_PIN                         GPIO_PIN_9
#define LED3_GPIO_PORT                   GPIOE
#define LED3_GPIO_CLK_ENABLE()           __HAL_RCC_GPIOE_CLK_ENABLE()
#define LED3_GPIO_CLK_DISABLE()          __HAL_RCC_GPIOE_CLK_DISABLE()

#define LED4_PIN                         GPIO_PIN_8
#define LED4_GPIO_PORT                   GPIOE
#define LED4_GPIO_CLK_ENABLE()           __HAL_RCC_GPIOE_CLK_ENABLE()
#define LED4_GPIO_CLK_DISABLE()          __HAL_RCC_GPIOE_CLK_DISABLE()

#define LEDx_GPIO_CLK_ENABLE(__LED__)   do { if ((__LED__) == LED3) LED3_GPIO_CLK_ENABLE(); else\
                                             if ((__LED__) == LED4) LED4_GPIO_CLK_ENABLE(); else\
                                             if ((__LED__) == LED5) LED5_GPIO_CLK_ENABLE(); else\
                                             if ((__LED__) == LED6) LED6_GPIO_CLK_ENABLE(); else\
                                             if ((__LED__) == LED7) LED7_GPIO_CLK_ENABLE(); else\
                                             if ((__LED__) == LED8) LED8_GPIO_CLK_ENABLE(); else\
                                             if ((__LED__) == LED9) LED9_GPIO_CLK_ENABLE(); else\
                                             if ((__LED__) == LED10) LED10_GPIO_CLK_ENABLE();} while(0)

#define LEDx_GPIO_CLK_DISABLE(__LED__)  (((__LED__) == LED3) ? LED3_GPIO_CLK_DISABLE() :\
                                         ((__LED__) == LED4) ? LED4_GPIO_CLK_DISABLE() :\
                                         ((__LED__) == LED5) ? LED5_GPIO_CLK_DISABLE() :\
                                         ((__LED__) == LED6) ? LED6_GPIO_CLK_DISABLE() :\
                                         ((__LED__) == LED7) ? LED7_GPIO_CLK_DISABLE() :\
                                         ((__LED__) == LED8) ? LED8_GPIO_CLK_DISABLE() :\
                                         ((__LED__) == LED9) ? LED9_GPIO_CLK_DISABLE() :\
                                         ((__LED__) == LED10) ? LED10_GPIO_CLK_DISABLE() : 0 )


void      LED_Init(Led_TypeDef Led);
void      LED_On(Led_TypeDef Led);
void      LED_Off(Led_TypeDef Led);
void      LED_Toggle(Led_TypeDef Led);

#endif
