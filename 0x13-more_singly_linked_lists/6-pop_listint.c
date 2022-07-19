#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node
 * @head: pointer to head
 * Return: data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	listint_t *tmp2;
	int n;

	if (head == 0 || tmp == 0)
		return (0);

	tmp2 = tmp->next;
	n = tmp->n;
	free(tmp);
	*head = tmp2;

	return (n);
}
