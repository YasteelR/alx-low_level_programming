#include "main.h"

/**
 * print_alphabet_x10 - writes lower-case alphabet
 */
void print_alphabet_x10(void)
{
	char a;
	int i;

	for (i = 0; i < 10 ; i++)
	{
		for (a = 'a' ; a <= 'z' ; a++)
		{
			putchar(a);
		}
		_putchar('\n');
	}
}

