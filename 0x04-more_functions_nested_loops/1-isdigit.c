#include <ctype.h>
#include "main.h"
/**
*_isdigit - isdigitr function
*@c: input
*Description: check if c is digit or not
*Return: 1 if c is dit  and 0 if not
*/
int _isdigit(int c)
{

	if (isdigit(c))
		return (1);
	return (0);

}
