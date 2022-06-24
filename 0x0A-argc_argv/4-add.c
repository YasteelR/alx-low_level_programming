#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * _isnumber - determine if the string is a number
 * @s: string
 * Return: On success 1
 */
int _isnumber(char *s)
{
	int i, number, len;

	i = 0, len = 0, number = 1;
	if (*s == '-')
		i++;
	for (; *(s + i) != 0; i++)
	{
		len = isdigit(*(s + i));
		if (len == 0)
		{
			number = 0;
			break;
		}
	}
	return (number);
}
/**
 * main - Entry point
 * @argc: counter
 * @argv: pointer array of strings
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i, n, ex;

	ex = 0, n = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (_isnumber(argv[i]))
				n += atoi(argv[i]);
			else
				ex = 1;
		}
	}
	if (ex == 0)
		printf("%i\n", n);
	else
		printf("%s\n", "Error");
	return (ex);
}
