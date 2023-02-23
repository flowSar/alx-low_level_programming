i#include <ctype.h>
#include "main.h"
/**
*_isupper - isupper funvtion
*@c: input
*Description: check if c is digit or ot
*Return: 1 if upper and 0 of not
*/
int _isdigit(int c)
{
if (isalpha(c))
	return (1);
return (0);
}
