#include <stdio.h>
#include "lists.h"
#include <stddef.h>
/**
 * print_listint - prints linked list
 * @h: pointer to head
 * Return: Number of elements
 */
size_t print_listint(const listint_t *h)
{
	unsigned int size = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}
