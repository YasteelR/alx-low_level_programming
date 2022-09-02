#include "lists.h"

/**
 * add_dnodeint_end - Adds new node @ last elm
 * @head: Pointer to address of head
 * @len: holds new node
 * Return: Address of new element, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *trverse;

	trverse = *head;
	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	node->len = n;
	node->next = NULL;
	if (!*head)
	{
		node->prev = NULL;
		*head = node;
	}
	else
	{
		while (trverse->next)
			trverse = trverse->next;
		node->prev = trverse;
		trverse->next = node;
	}

	return (node);
}
