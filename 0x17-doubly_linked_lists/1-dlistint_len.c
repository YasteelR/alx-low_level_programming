#include "lists.h"

/**
 * dlistint_len - Returns length
 * @h: Pointer to head
 * Return: Number length
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node;
	size_t len;

	node = h;
	len = 0;
	while (node)
	{
		node = node->next;
		++len;
	}
	return (len);
}
