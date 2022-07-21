#include "main.h"
/**
 * set_bit - set bit
 * @n: number
 * @index: bit to set
 * Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n += 1 << index;
	return (1);
}
