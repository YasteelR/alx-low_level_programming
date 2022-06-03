#include <stdio.h>
/**
 * main - main prints numbers 0-9 without using char or printf/puts,
 * Return: always 0 (success)
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}

	putchar('\n');
	return (0);
}
