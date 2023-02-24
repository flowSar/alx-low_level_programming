/**
 * print_most_numbers - this function print number from 0to 9 exclude 2 and 4
 *
 * Return : alway 0
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i == 2 || i == 4)
			continue;
		else
			_putchar(i);
		i++;
	}
	_putchar('\n');
}
