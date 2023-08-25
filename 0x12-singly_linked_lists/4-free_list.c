#include <stdlib.h>
#include "lists.h"

/**
* free_list - A function that make frees a linked list.
* @head: list_t list to be freed.
* Return: No return.
*/

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
