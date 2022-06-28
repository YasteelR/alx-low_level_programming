#include "main.h"
#include <stdlib.h>
/**
 * str_concat - join two strings
 * @s1: str 1
 * @s2: str 2
 * Return: Pointer
 */
char *str_concat(char *s1, char *s2)
{
	int count1, count2, i, k;
	char *s;
	char *nul = "";

	if (s1 == NULL)
		s1 = nul;
	if (s2 == NULL)
		s2 = nul;

	count1 = 0, count2 = 0;
	while (*(s1 + count1))
		count1++;
	while (*(s2 + count2))
		count2++;

	s = malloc(sizeof(char) * (count1 + count2 + 1));

	if (s == 0)
		return (0);

	for (i = 0; i < count1; i++)
		*(s + i) = *(s1 + i);

	for (i = 0, k = count1; i <= count2; k++, i++)
		*(s + k) = *(s2 + i);

	return (s);
}
