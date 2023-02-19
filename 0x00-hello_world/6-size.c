#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;

	printf("Size of char: %zu byte\n", sizeof(char));
	printf("Size of int: %zu bytes\n", sizeof(int));
	printf("Size of a long int: %zu bytes\n", sizeof(long));
	printf("Size of a long long int %zu bytes\n", sizeof(long long));
	printf("Size of a long float: %zu bytes\n", sizeof(float));
	
	return (0);
}
