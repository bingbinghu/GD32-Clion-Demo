//
// Created by 10132 on 2022/2/28.
//
#include "LEDCtrl.hpp"

U_LED::U_LED() {

}

/*!
 * @brief LED初始化
 */
void U_LED::init(led_typedef_enum lednum)
{
    // 使能LED的时钟
    rcu_periph_clock_enable(GPIO_CLK[lednum]);
    //配置LED 对应 GPIO的 port
    gpio_init(GPIO_PORT[lednum], GPIO_MODE_OUT_PP, GPIO_OSPEED_50MHZ, GPIO_PIN[lednum]);
    GPIO_BC(GPIO_PORT[lednum]) = GPIO_PIN[lednum];
}

/*!
 * @brief 打开LED
 * @param lednum LED的序号
 * @arg LED2
 * @arg LED3
 * @arg LED4
 * @return None
 */
void U_LED::TurnOn(led_typedef_enum lednum)
{
    GPIO_BOP(GPIO_PORT[lednum]) = GPIO_PIN[lednum];
}

/*!
 * @brief 关闭LED
 * @param lednum LED的序号
 * @arg LED2
 * @arg LED3
 * @arg LED4
 * @return None
 */
void U_LED::TurnOff(led_typedef_enum lednum)
{
    GPIO_BC(GPIO_PORT[lednum]) = GPIO_PIN[lednum];
}



