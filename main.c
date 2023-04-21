#include<stdio.h>
int main(void)
{


    unsigned int *RCGCGPIO,*GPIODEN,*GPIODATA,*GPIODIR;
    RCGCGPIO =(unsigned int *)0x400FE608U;
    GPIODEN =(unsigned int *)0x4002551CU;
    GPIODIR =(unsigned int *)0x40025400U;
    GPIODATA  =(unsigned int *)0x400253FCU;

    *RCGCGPIO=0x20U; //CLOCK FOR PORT F
    *GPIODIR=0x0EU;  //PF1 PF2 PF3 AS OUTPUT
    *GPIODEN=0x0EU;  //DIGITALISE THE PORT F

    while(1){
    *GPIODATA|=(1<<2);//LED_B -->TURN ON    0x02U --->LED_R   0x08U---->LED_G
}
}
