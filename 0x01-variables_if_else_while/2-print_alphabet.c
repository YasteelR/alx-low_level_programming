#include <stdio.h>
/**
 * main - prints the lowercase alphabete.
 * Return: always 0 (success)
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{

		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
