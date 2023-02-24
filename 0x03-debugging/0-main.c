#include "main.h"
/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/
int main(void)
{
	int i = 0;
	int result;

	result = positive_or_negative(i);
	if (result > 0)
		printf("the number is positive");
	else
		printf("the number is negativ");
	return (0);
}
