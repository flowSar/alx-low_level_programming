#include "main.h"
/**
 * jack_bauer - prints every minute of the day starting from 00:00 to 23:59
 * @void: value
 *
 * Return: 0 if running is success
 */

void jack_bauer(void)
{
	int i = 0;
	
	while (i <= 23)
	{
		int j = 0;

		while (j <= 59;)
		{
			if (i < 10)
			{
				_putchar("0");
				_putchar(i);
			}
			else
			{
				_putchar(i);
			}
			putchar(':');
			if (j < 10)
			{
				_putchar("0");
				_putchar(j);
			}
			else
			{
				_putchar(j);
			}
			j++;
			putchar('\n');
		}
		i++;
	}
	return (0);
}
