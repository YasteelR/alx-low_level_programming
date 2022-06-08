#include "main.h"
/**
 * print_sign - prints +/-
 * @n: Number to be tested
 * Return: 1 > zero, 0 = Zero, -1 < zero.
 */
int print_sign(int n)
{
  if (n > 0)
  {
	  _putchar('+');
		return (1);
  }
  else if (n < 0)
  {
    _putchar('-');
    return (-1);
	}
	else
  {
	  _putchar('0');
		return (0);
	}
}
