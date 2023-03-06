#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_diagsums - function that searches a string for any of a set of bytes
 * @a : input
 * @size : input
 *
 * Return: return the rest of pointer,
 */
void print_diagsums(int *a, int size)
{
	int sum = 0, sum2 = 0, i, j;

	for (i = 0; i < size * size; i += size + 1)
	{
		sum += a[i];
	}
	for (j = size - 1; j < (size * size) - size + 1; j += size - 1)
	{
		sum2 += a[j];
	}

	printf("%d, %d\n", sum, sum2);

}
