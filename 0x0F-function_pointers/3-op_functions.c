#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - add function.
 * Description: add tow integers and return the result.
 * @a: number one.
 * @b : number two.
 * Return: the sommeof two integers.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract function.
 * Description: subtract number from another.
 * @a: number one.
 * @b : number two.
 * Return: the esult of subtraction integers.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply function.
 * Description: multiply tow integers and return the result
 * @a: number one.
 * @b : number two.
 * Return: the result of multiplication.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide function.
 * Description: divide one nuber on another.
 * @a: number one.
 * @b : number two.
 * Return: the result of divide.
 */
int op_div(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - mod function.
 * Description: get rest of divided of two numbers.
 * @a: number one.
 * @b : number two.
 * Return: the rest.
 */
int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
