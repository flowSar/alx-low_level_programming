#include <stdio.h>
#include "1-pi.h"
/**
 * main -  entry function.
 * Description: print the name of the file that compli from.
 * Return: o if it success and 1 if it fails.
 */
int main(void)
{
	printf("%s\n", __FILE__);


    float a;
    float r;

    r = 98;
    a = PI * r * r;
    printf("%.3f\n", a);


	return (0);
}
