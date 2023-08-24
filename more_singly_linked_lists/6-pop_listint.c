#include "lists.h"

/**
* pop_listint - removes node from head
* @head: to be removed
* Return: new head value
*/

int pop_listint(listint_t **head)
{
	listint_t *delete;
	int x = 0;

	if (*head == NULL)
		return (0);

	delete = *head;
	x = delete->n;
	*head = (*head)->next;

	free(delete);

	return (x);
}
