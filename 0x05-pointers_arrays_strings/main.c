#include <stdio.h>
#include <limits.h>
#include "main.h"

void reset_to_98(int *n)
{
	*n = 89;
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = 402;
	printf("%d\n", n);
	reset_to_98(&n);
	printf("%d\n", n);
	return (0);
}
