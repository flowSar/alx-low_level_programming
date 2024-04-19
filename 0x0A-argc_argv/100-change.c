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
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int number = atoi(argv[1]);
	if (number < 0)
		printf("0\n");
	return(0);
}