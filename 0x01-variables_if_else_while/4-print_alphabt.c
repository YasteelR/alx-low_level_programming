#include <stdio.h>
/**
 * main - Prints the alphabet except the letters q and e.
 * Return: always 0 (success)
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
