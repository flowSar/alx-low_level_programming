#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry function
 * Description: Creates a multidimensional array
 * @argc: size
 * @argv: data
 * Return: 0 if it success and 1 if it fails.
 */
int main(int argc, char *argv[])
{
	int i, res = 1;

	for (i = 1; i < argc; i++)
	{
		int v = strtol(argv[i], NULL, 10);

		if (v)
		{
			printf("Error\n");
			exit(98);
		}
		res = res * v;
	}
	printf("\n");
	return (0);
}
