#include "lists.h"

/**
 * print_dlistint - Prints entire linked list
 * @h: Pointer to head
 * Return: length
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node;
	size_t n;

	node = h;
	n = 0;
	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
		++n;
	}
	return (n);
}
