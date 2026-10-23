#include <reg51.h>
sbit red = P2^0;
sbit yellow = P2^1;
sbit green = P2^2;

void delay(int time);

void main(void)
{
    red = 0;
    yellow = 0;
    green = 0;

    while (1)
    {
        // Red LED ON
        red = 1;
        yellow = 0;
        green = 0;
        delay(200);

        // Yellow LED ON
        red = 0;
        yellow = 1;
        green = 0;
        delay(100);

        // Green LED ON
        red = 0;
        yellow = 0;
        green = 1;
        delay(200);

        // Green LED OFF
        green = 0;
    }
}

void delay(int time)
{
    int i, j;

    for (i = 0; i < time; i++)
    {
        for (j = 0; j < 100; j++)
        {
            
        }
    }
}
