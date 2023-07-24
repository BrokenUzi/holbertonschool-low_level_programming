#include "lists.h"

/**
* add_dnodeint - adds a new node as head node
* @head : head node
* @n : new node
* Return: NULL if failed, box if success.
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *box, *shelf;

	box = malloc(sizeof(dlistint_t));

	if (box == NULL)
	{
		free(box);
		return (NULL);
	}

	box->n = n;
	box->prev = NULL;

	if (*head == NULL)
	{
		box->next = NULL;
		*head = box;
	}
	else
	{
		shelf = *head;
		box->next = shelf;
		shelf->prev = box;
		*head = box;
	}
	return (box);
}
