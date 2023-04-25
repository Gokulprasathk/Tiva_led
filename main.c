
#include<stdio.h>
void delay(long d);

void delay(long d)
{
    while(d--);
}


int main(void )
{


    unsigned int *RCGCGPIO,*GPIODEN,*GPIODATA,*GPIODIR;
    RCGCGPIO =(unsigned int *)0x400FE608U;
    GPIODEN =(unsigned int *)0x4002551CU;
    GPIODIR =(unsigned int *)0x40025400U;
    GPIODATA  =(unsigned int *)0x400253FCU;

    *RCGCGPIO=0x20U; 
    *GPIODIR=0x0EU;  
    *GPIODEN=0x0EU;  

    while(1){
    *GPIODATA=0x08U;
    delay(1000000);
    *GPIODATA=0x00U;
    delay(1000000);

}
}



