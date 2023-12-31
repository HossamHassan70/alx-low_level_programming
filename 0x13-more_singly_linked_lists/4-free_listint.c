#include "lists.h"

/**
* free_listint - A function to free a linked list.
* @head: listint_t-> A list to be freed.
* Return: void.
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
