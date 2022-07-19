#include "lists.h"
#include <stddef.h>
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to head
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *a, *b;

	if (*head == 0)
		return (0);

	if ((*head)->next == 0)
		return (*head);

	a = *head;
	b = a->next;
	a->next = 0;
	while (1)
	{
		if (b->next == 0)
		{
			b->next = *head;
			*head = b;
			break;
		}
		a = b;
		b = a->next;
		a->next = *head;
		*head = a;
	}

	return (*head);
}
