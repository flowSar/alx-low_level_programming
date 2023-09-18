#include "main.h"
#include <stdio.h>
/**
 * print_array - print array of n element
 * @a : input
 * @n : input
 *
 * Return: the length ofstring
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
