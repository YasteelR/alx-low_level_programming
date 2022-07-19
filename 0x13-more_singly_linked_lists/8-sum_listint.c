#include "lists.h"
/**
 * sum_listint - returns the sum of all numbers
 * @head: head pointer of singly linked list
 * Return: sum of all the numbers (n)
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	if (head == 0)
		return (0);

	while (head != 0)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}
