#include "main.h"

/**
 * print_last_digit - will print the last digit.
 * @n: Number used to find the last digit.
 * Description: will print the last digut
 * Return: last digit.
 */
int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
	{
		n *= -1;
	}
	_putchar('0' + n);
	return (n);
}
