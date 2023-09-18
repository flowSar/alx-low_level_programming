#include "main.h"
#include <stdio.h>
#include <limits.h>
/**
 * get_endianness - function that checks the endianness.
 * Return: 1 littlee ndian and 0 big endian.
 */
int get_endianness(void)
{
	union
	{
		short s;
		char c[sizeof(short)];
	} endian_test;
	endian_test.s = 0x1234;
	if (endian_test.c[0] == 0x34 && endian_test.c[1] == 0x12)
	{
		return (1);
	}
	else if (endian_test.c[0] == 0x12 && endian_test.c[1] == 0x34)
	{
		return (0);
	}
	return (0);
}
