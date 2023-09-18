#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>
/**
 * main - main function.
 * Description: entry function
 * @argc: number of paramaters,
 * @argv : list of colland line.
 * Return:0 if success and 1 if it fails.
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int number1, number2, result;
	int (*operation)(int, int);

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[i + 1])[1] != '\0')
	{
		printf("Error\n");
		exit(98);
	}
	operation = get_op_func(argv[i + 1]);
	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	number1 = atoi(argv[i]);
	number2 = atoi(argv[i + 2]);
	result = operation(number1, number2);
	printf("%d\n", result);

	return (0);
}
