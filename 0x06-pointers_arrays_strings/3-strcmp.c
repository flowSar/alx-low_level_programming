#include <stdio.h>
#include <string.h>
/**
 * _strcmp - sget length of a tring
 * @s1 : input
 * @s2 : input
 *
 * Return: 0 if success
 */
int _strcmp(char *s1, char *s2)
{
	int result;

	result = strcmp(s1, s2);
	return (result);
}
int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World!";

    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
    return (0);
}