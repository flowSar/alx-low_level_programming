#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * is_palindrome -this function to check if string is a palindrome.
 * @s : input
 *
 * Return: return 1 if a string is palindrome and 0 if not,
 */

int is_palindrome(char *s)
{
	int res;

	if (s == NULL)
		return (0);
	res = is_palindrome_helper(s, 0, get_length(s) - 1);
	return (res);

}
/**
 * get_length- get length of a string
 * @str : string
 *
 * Return: return the length,
 */
int get_length(char *str)
{
	int len = (int)strlen(str);

	return (len);
}
/**
 * is_palindrome_helper-recuersion function
 * that help check is a string is a plindrome.
 * @str : input
 * @i : input
 * @j : input
 *
 * Return: return -1 if n < 0 and if not retunr the factorial number,
 */
int is_palindrome_helper(char *str, int i, int j)
{
	int r;

	if (i > (get_length(str)) / 2)
		return (1);
	if (str[i] != ' ')
		i += 1;
	if (str[j] != ' ')
		j -= 1;
	if (str[i] != str[j])
		return (0);
	r = 0 + is_palindrome_helper(str, i + 1, j - 1);
	return (r);
}
