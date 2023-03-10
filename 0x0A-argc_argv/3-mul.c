#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry function
 * @argc : input
 * @argv : input
 *
 * Return: o if program success.
 */
int main(int argc, char *argv[])
{
	int i, result = 1;

	for (i = 1; i < argc; i++)
		result = result * strtol(argv[i], NULL, 10);
	printf("%d\n", result);
	return (0);
}
