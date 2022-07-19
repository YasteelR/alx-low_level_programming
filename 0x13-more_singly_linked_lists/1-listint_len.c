#include "lists.h"
#include <stddef.h>
/**
 * listint_len -  counts number of elements
 * @h: pointer to head
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int size = 0;

	while (h != 0)
		h = h->next, size++;

	return (size);
}
