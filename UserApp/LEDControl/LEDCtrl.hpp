//
// Created by 10132 on 2022/2/28.
//

#ifndef GD32F10X_LEDCTRL_HPP
#define GD32F10X_LEDCTRL_HPP

#ifdef __cplusplus
extern "C"{
#endif

#include "gd32f10x.h"

#ifdef __cplusplus
};
#endif


#define LEDn                             4U
#define LED2_PIN                         GPIO_PIN_0
#define LED2_GPIO_PORT                   GPIOC
#define LED2_GPIO_CLK                    RCU_GPIOC

#define LED3_PIN                         GPIO_PIN_2
#define LED3_GPIO_PORT                   GPIOC
#define LED3_GPIO_CLK                    RCU_GPIOC

#define LED4_PIN                         GPIO_PIN_0
#define LED4_GPIO_PORT                   GPIOE
#define LED4_GPIO_CLK                    RCU_GPIOE

#define LED5_PIN                         GPIO_PIN_1
#define LED5_GPIO_PORT                   GPIOE
#define LED5_GPIO_CLK                    RCU_GPIOE

static uint32_t GPIO_PORT[LEDn] = {LED2_GPIO_PORT, LED3_GPIO_PORT,
                                   LED4_GPIO_PORT, LED5_GPIO_PORT};
static uint32_t GPIO_PIN[LEDn] = {LED2_PIN, LED3_PIN, LED4_PIN, LED5_PIN};
static rcu_periph_enum GPIO_CLK[LEDn] = {LED2_GPIO_CLK, LED3_GPIO_CLK,

                                         LED4_GPIO_CLK, LED5_GPIO_CLK};
typedef enum
{
    LED2 = 0,
    LED3 = 1,
    LED4 = 2,
    LED5 = 3
} led_typedef_enum;



class U_LED{
public:
    U_LED();
    void init(led_typedef_enum lednum);
    void TurnOn(led_typedef_enum lednum);
    void TurnOff(led_typedef_enum lednum);

private:

};



#endif //GD32F10X_LEDCTRL_HPP
