#include "main.h"


void jack_bauer(void)
{
	for (int i = 0; i <= 23; i++)
	{

		for (int j = 0; j <= 59; j++)
			{
			if (i < 10){
				_putchar("0");
				_putchar(i);
			}
			else
			{
				_putchar(i);
			}
			putchar(':');
				if (j < 10){
				_putchar("0");
				_putchar(j);
			}
			else
			{
				_putchar(j);
			}
			putchar('\n');
		}
	}
}