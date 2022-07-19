#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees memory
 * @head: head pointer
 * Return: 0
 */
void free_listint(listint_t *head)
{
	if (head == 0)
		return;

	free_listint(head->next);
	free(head);
}
