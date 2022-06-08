#include "main.h"
#include <ctype.h>
/**
 * _islower - check if character is lower case.
 * Return: 1 (True) else 0 (False)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}	
