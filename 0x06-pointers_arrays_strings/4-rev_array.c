#include <stdio.h>
#include <string.h>
/**
 * reverse_array - reverse the content of array
 * @a : input
 * @n : input
 *
 * Return: 0 if success
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = 0;
	for (i = n - 1; i > n / 2; i--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		j++;
	}
}

