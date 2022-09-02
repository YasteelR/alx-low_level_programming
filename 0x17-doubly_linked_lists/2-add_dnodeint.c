#include "lists.h"

/**
 * add_dnodeint - insert a new node @ head
 * @head: Pointer to new head
 * @n: holds new node
 * Return: Address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = *head;
	if (*head)
		(*head)->prev = node;
	*head = node;

	return (node);
}
