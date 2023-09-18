#include <stdio.h>
/**
* main - causes an infinite loop
* Return: 0
*/
int main(void)
{
	int i = 10;

	printf("Infinite loop incoming :(\n");
	/**
	 * this part is causing infinit loop 
	 * because there's no increament on i so
	 * so the loop won't stop
	 */ 
	while (i < 10)
	{
		putchar(i);
		/**
		 * you sould put increament of i her
		 * sso the wile will stop at 9<10
		 *
		 */
	}
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
