#include "main.h"
/**
 * flip_bits - flip bits
 * @n: number
 * @m: value to compare
 * Return: no. of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;

	i = 0;
	n = n ^ m;
	while (n)
	{
		i += n & 1;
		n >>= 1;
	}
	return (i);
}
