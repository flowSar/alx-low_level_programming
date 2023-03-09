#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * do_prime - is recursive help function.
 * @n : input
 * @i : input
 *
 * Return: return 1 if prime and 0 if not.
 */
int do_prime(int n, int i)
{
	int res;

	if (n == i)
		return (1);
	res = n % i;
	if (res == 0)
		return (0);
	do_prime(n, i + 1);
	return (1);

}

/**
 * is_prime_number - function t check if a number is prime a number.
 * @n : input
 *
 * Return: return 1 if prime and 0 if not.
 */

int is_prime_number(int n)
{
	if (n < 0 || n == 1)
		return (0);

	return (do_prime(n, 2));
}
