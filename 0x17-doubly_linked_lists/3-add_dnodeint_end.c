#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list.
 * @head: Pointer to a pointer to the first element of the list.
 * @n: Integer to set in the new node.
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *aux = *head;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (aux)
	{
		while (aux->next)
			aux = aux->next;
		new->prev = aux;
		aux->next = new;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}
	return (new);
}

