#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates a array of chars of a specific type
 * @size: size to allocate
 * @c: The specific cher to print
 * Return: pointer
 *
 */

char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	ch = malloc(sizeof(char) * size);

	if (ch == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			ch[i] = c;
		}
	}
	return (ch);

}
