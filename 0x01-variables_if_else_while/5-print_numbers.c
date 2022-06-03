#include <stdio.h>
/**
 * main - Prints the numbers from 0-9.
 * Return: 0 on success
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
