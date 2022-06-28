#include "main.h"
#include <stdlib.h>
/**
 * argstostr - joins all the arguments of your program
 * @ac: argument index
 * @av: arguments passed from main
 * Return: Pointer
 */
char *argstostr(int ac, char **av)
{
	char *output;
	int size, s, i, j, k;

	if (ac == 0 || av == NULL)
		return (0);
	size = 0, k = 0;
	for (i = 0; i < ac; i++)
	{
		s = 0;
		while (av[i][s])
			s++;
		size += s + 1;
	}
	output = malloc((size + 1) * sizeof(char));

	if (output == 0)
		return (0);

	for (j = 0; j < ac; j++)
	{
		s = 0;
		while (av[j][s])
		{
			*(output + k) = av[j][s];
			k++;
			s++;
		}
		*(output + k) = '\n';
		k++;
	}
	*(output + k) = '\0';

	return (output);
}
