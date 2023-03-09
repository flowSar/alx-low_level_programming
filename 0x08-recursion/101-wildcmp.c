#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _pow_recursion - function calculate factorial number.
 * @x : input
 * @y : input
 *
 * Return: return -1 if n < 0 and if not retunr the factorial number,
 */
//    r = wildcmp("main.c", "*.c");
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	if (*s1 != '\0')
		s1++;
	if (*s2 != '\0')
		s2++;
	wildcmp(s1, s2);
	if (*s1 != *s2 && *s1 != '*')
		return (0);
	return (1);
}
