#include "main.h"

/**
 * swap_int - swap the value of two integer
 * @a : input
 * @b : input
 *
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
