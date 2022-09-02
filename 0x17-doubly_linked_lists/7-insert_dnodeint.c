#include "lists.h"

/**
 * dlistint_len - linked list length
 * @h: Pointer to head
 * Return: length
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *trverse;
	size_t n;

	trverse = h;
	n = 0;
	while (trverse)
	{
		trverse = trverse->next;
		++n;
	}
	return (n);
}

/**
 * insert_dnodeint_at_index - Inserts a new node @ specif index
 * @h: Pointer to head
 * @idx: Index to add node
 * @n: Data to add
 * Return: New node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *trverse, *node;
	unsigned int i;

	trverse = *h;
	i = 1;

	if ((!trverse && idx) || idx > dlistint_len(*h))
		return (NULL);
	while (i < idx)
	{
		if (!trverse)
			return (NULL);
		++i;
		trverse = trverse->next;
	}
	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	if (idx)
	{
		node->prev = trverse;
		node->next = trverse->next;
		trverse->next = node;
		if (node->next)
		{
			trverse = node->next;
			trverse->prev = node;
		}
	}
	else
	{
		node->prev = NULL;
		node->next = trverse;
		if (node->next)
			trverse->prev = node;
		*h = node;
	}
	node->n = n;
	return (node);
}
