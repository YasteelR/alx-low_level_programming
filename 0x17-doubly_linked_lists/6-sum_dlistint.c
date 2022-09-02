#include "lists.h"

/**
 * sum_dlistint - sums linked list
 * @head: Pointer to head
 * Return: Sumed data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *trverse;
	int sum;

	trverse = head;
	sum = 0;

	while (trverse)
	{
		sum += trverse->n;
		trverse = trverse->next;
	}
	return (sum);
}
