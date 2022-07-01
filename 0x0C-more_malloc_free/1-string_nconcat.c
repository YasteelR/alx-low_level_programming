#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat -  concatenates two strings
 * @s1: str1
 * @s2: str2
 * @n: number of bytes of str2
 * Return: Pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int container1, container2, i, j;
	char *s;
	char *nul = "";

	if (s1 == NULL)
		s1 = nul;
	if (s2 == NULL)
		s2 = nul;

	container1 = 0, container2 = 0;
	while (*(s1 + container1))
		container1++;
	while (*(s2 + container2))
		container2++;

	if (n < container2)
		container2 = n;

	s = malloc(sizeof(char) * (container1 + container2 + 1));

	if (s == 0)
		return (0);

	for (i = 0; i < container1; i++)
		*(s + i) = *(s1 + i);

	for (i = 0, j = container1; i < container2; j++, i++)
		*(s + j) = *(s2 + i);

	*(s + j) = '\0';

	return (s);
}
