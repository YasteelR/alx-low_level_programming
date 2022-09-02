#include "lists.h"

/**
 * free_dlistint - Frees memeory
 * @head: Pointer to freed space
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *trverse;

	while (head)
	{
		trverse = head;
		head = head->next;
		free(trverse);
	}
}
