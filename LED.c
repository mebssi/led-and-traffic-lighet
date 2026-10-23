#include<reg51.h>
sbit LED=P2^0;
void Delay();
void main()
{
	while(1)
	{
		LED=0;
		Delay();
		LED=1;
		Delay();
	}
}
void Delay(void)
{
	long i;
	for(i=0;i<12000;i++)
	{}
	}
		