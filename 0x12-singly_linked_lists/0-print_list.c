#include <stdio.h>
#include "lists.h"
#include <stddef.h>
/**
 * print_list - prints a  linked list
 * @h: pointer to head
 * Return: Number of elements
 */
size_t print_list(const list_t *h)
{
	unsigned int size = 0;

	while (h != NULL)
	{
		if (h->str != 0)
			printf("[%i] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		size++;
	}
	return (size);
}
