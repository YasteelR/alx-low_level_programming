#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees memory
 * @head: pointer to head
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head)
	{
		while (*head != 0)
		{
			tmp = *head;
			*head = tmp->next;
			free(tmp);
		}
	}

}
