#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _sqrt_recursion - function calculate factorial number.
 * @x : input
 *
 * Return: return -1 if n < 0 and if not retunr the factorial number,
 */
int _sqrt_recursion(int n)
{	
	int i , res, data[];
	if (n%2!= 0 && n != 1)
		return (-1);

	if (n == 1)
		return 0;
	res = n /2;
	printf("res: %d\n", n);
	i= (1/2) + _sqrt_recursion(res);
	data[i] = res;
	return (i);
}
int main(void)
{
    int r;

    // r = _sqrt_recursion(1);
    // printf("%d\n", r);
    r = _sqrt_recursion(1024);
    printf("%d\n", r);
    // r = _sqrt_recursion(16);
    // printf("r: %d\n", r);
    // r = _sqrt_recursion(17);
    // printf("%d\n", r);
    // r = _sqrt_recursion(25);
    // printf("%d\n", r);
    // r = _sqrt_recursion(-1);
    // printf("%d\n", r);
    return (0);
}