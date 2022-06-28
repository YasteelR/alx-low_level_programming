#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - creates a pointer to a 2D aray of integers
 * @width: width
 * @height: height
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **ptrgrid;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptrgrid = malloc(height * sizeof(int *));
	if (ptrgrid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptrgrid[i] = malloc(width * sizeof(int));
		if (ptrgrid[i] == NULL)
		{
			for (l = 0; l < i; l++)
				free(ptrgrid[l]);
			free(ptrgrid);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			ptrgrid[j][k] = 0;
	}
	return (ptrgrid);
}
