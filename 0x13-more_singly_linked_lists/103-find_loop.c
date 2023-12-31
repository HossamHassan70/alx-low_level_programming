#include "lists.h"
#include <stdlib.h>

/**
* find_listint_loop - A function to find a loop in linked list.
* @head: A linked list to search.
* Return: To Address of node where loop struct || null if no loop.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr, *end;

	if (head == NULL)
		return (NULL);

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (ptr = head; ptr != end; ptr = ptr->next)
			if (ptr == end->next)
				return (end->next);
	}

	return (NULL);
}
