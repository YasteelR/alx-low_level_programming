#include "main.h"

/**
 * print_alphabet(void) - Prints the alphabet
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}

