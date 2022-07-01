#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _memset -  initializes n bytes of memory to x
 * @ptr: adress
 * @x: initialize var
 * @n: number of bytes
 * Return: Return char pointer
 */
char *_memset(char *ptr, int x, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		ptr[i] = x;

	return (ptr);
}

/**
 * _calloc -  allocates memory using malloc and initializes in 0
 * @nmemb: number of elements to allocate
 * @size: elements size
 * Return: Pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *d;


	if (nmemb == 0 || size == 0)
		return (0);

	d = malloc(nmemb * size);
	if (d == 0)
		return (0);
	_memset(d, 0, size * nmemb);

	return (d);
}
