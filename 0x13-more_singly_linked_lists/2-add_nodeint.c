#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - add new node
 * @head: pointer to head
 * @n: number to add
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == 0)
		return (0);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
