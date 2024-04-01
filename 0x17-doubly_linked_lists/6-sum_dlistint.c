#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all data (n) in a doubly linked list.
 * @head: Pointer to the head of the list.
 * Return: Sum of all data in the list, 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
