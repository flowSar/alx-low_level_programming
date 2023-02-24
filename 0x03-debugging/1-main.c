#include <stdio.h>
/**
* main - causes an infinite loop
* Return: 0
*/
int main(void)
{
	int i = 0;

	printf("Infinite loop incoming :(\n");
	/**
	 * this part is causing infinit loop 
	 * because there's no increament on i so
	 * so the loop qwon't stop
	 */ 
	while (i < 10)
	{
		putchar(i);
	}
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
