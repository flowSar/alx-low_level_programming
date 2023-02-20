#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

	for (int i = 0; i < 15; i++)
	{
		printf("%x", number[i]);
	}
	putchar('\n');
}


