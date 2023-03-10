#include <stdio.h>
/**
 * main - Entry function
 * @argc : input
 * @argv : input
 *
 * Return: o if program success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
