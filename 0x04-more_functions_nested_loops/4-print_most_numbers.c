#include "main.h"
/**
 * print_most_numbers - this function print number from 0to 9 exclude 2 and 4
 *
 * Return : alway 0
 */
void print_most_numbers(void)
{
        char nm[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
        int i = 0;
        while (i < 9)
        {
                _putchar(nm[i]);
                i++;
        }
        _putchar('\n');
}
