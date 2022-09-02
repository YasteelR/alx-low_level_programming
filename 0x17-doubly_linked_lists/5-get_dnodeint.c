#include "lists.h"

/**
 * get_dnodeint_at_index - Returns node @ pos n
 * @head: Pointer to head
 * @index: node position
 * Return: Specified node n
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *trverse;
	unsigned int n;

	trverse = head;
	n = 0;

	while (trverse)
	{
		if (n == index)
			return (trverse);
		trverse = trverse->next;
		++n;
	}
	return (NULL);
}
