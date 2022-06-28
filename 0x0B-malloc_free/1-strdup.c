#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to a string
 * @str: string
 * Return: pointer
 **/
char *_strdup(char *str)
{
	char *ch;
	int i, k;
	int coun = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		coun = coun + 1;
	}

	ch = malloc(sizeof(char) * coun + 1);

	if (ch == NULL)
	{
		return (NULL);
	}
	for (k = 0; str[k] != '\0' ; k++)
	{
		ch[k] = str[k];
	}

	ch[k] = '\0';

	return (ch);
}
