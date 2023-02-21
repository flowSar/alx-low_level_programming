/**
 * print_alphabet - pritn phabet in lowercase
 *
 */

void print_alphabet(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		++c;
	}
	putchar('\n');
}
