#include <stdio.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to head
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int size = 0;

	while (h != 0)
		h = h->next, size++;

	return (size);
}
