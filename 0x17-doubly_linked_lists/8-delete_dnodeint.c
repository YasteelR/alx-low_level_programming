#include "lists.h"

/**
 * dlistint_len - finds linked list length
 * @h: Pointer to head
 * Return: Length
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *trverse;
	size_t index;

	trverse = h;
	index = 0;
	while (trverse)
	{
		trverse = trverse->next;
		++index;
	}
	return (index);
}

/**
 * delete_dnodeint_at_index - Deletes node @ specific position
 * @head: Pointer to head
 * Return: 1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *trverse, *address;
	unsigned int i;

	if (!*head || index > dlistint_len(*head))
		return (-1);
	address = *head;
	trverse = *head;
	i = 1;

	while (i < index)
	{
		if (!address)
			return (-1);
		++i;
		address = address->next;
	}
	if (index)
	{
		trverse = address->next;
		address->next = trverse->next;
		if (address->next)
		{
			address = address->next;
			address->prev = trverse->prev;
		}
	}
	else
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;

	}
	free(trverse);
	return (1);
}
