#include "lists.h"

/**
 * sum_dlistint - This return sum of all data (n) of a dlistint_t list.
 * @head: for  pointer to the list.
 * Return: sum of all data in the list, 0 if the lost is empty.
 **/
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
