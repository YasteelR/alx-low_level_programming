#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range -  creates an array of integers
 * @min: min value
 * @max: max value
 * Return: Pointer
 */
int *array_range(int min, int max)
{
	int *d;
	int size, i, j;

	if (min > max)
		return (0);

	if (max > min)
		size = max - min + 1;
	else if (max == min)
		size = 2;

	d = malloc(sizeof(int) * size);
	if (d == 0)
		return (0);

	for (i = 0, j = min; j <= max; i++, j++)
		d[i] = j;
	if (max == min)
		d[i] = max;
	return (d);
}
