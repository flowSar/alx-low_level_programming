#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nm [] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'e', 'f'};

	for (int i = 0;  i <= 15; i++)
	{
		putchar(nm[i]);
	}
	putchar('\n');
}


