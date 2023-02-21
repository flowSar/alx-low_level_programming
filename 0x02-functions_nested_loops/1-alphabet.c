#include <stdio.h>
#include <unistd.h>
//#include "main.h"



/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}

void print_alphabet(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		++c;
	}
	_putchar('\n');
}


int main(void)
{
	print_alphabet();
	return (0);
}

