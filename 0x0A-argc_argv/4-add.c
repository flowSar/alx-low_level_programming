#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry function
 * @argc : input
 * @argv : input
 *
 * Return: o if program success.
 */
int main(int argc, char *argv[])
{
	int i, result = 0;

	for (i = 1; i < argc; i++)
	{
		result = result + strtol(argv[i], NULL, 10);
	}

	if (argc > 2)
	{
		printf("%d\n", result);
		return (0);
	}
	else if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	printf("Error\n");
	return (1);
}
