#include "lists.h"

/**
* add_dnodeint_end - adds a new node a the end of the list
* @head : head node
* @n : new node
* Return: Null if failure, box if successful
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *box;
	dlistint_t *shelf;

	box = malloc(sizeof(dlistint_t));

	if (box == NULL)
	{
		free(box);
		return (NULL);
	}

	box->n = n;
	box->next = NULL;

	if (*head == NULL)
		*head = box;
	else
	{
		shelf = *head;
		while (shelf->next != NULL)
		{
			shelf = shelf->next;
		}
	shelf->next = box;
	box->prev = shelf;
	}
	return (box);
}
