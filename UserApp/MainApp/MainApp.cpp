//
// Created by 10132 on 2022/2/28.
//
#include "MainApp.h"
#include "LEDCtrl.hpp"

#include "gd32f10x.h"

U_LED Led_Blink;

void Main()
{
    Led_Blink.init(LED2);

    for(;;)
    {
        Led_Blink.TurnOn(LED2);
        delay_1ms(500);
        Led_Blink.TurnOff(LED2);
        delay_1ms(500);
    }
}
