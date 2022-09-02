#include "lists.h"

/**
 * print_dlistint - Prints entire linked list
 * @h: Pointer to head
 * Return: length
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node;
	size_t len;

	node = h;
	len = 0;
	while (node)
	{
		printf("%d\n", node->len);
		node = node->next;
		++len;
	}
	return (len);
}
