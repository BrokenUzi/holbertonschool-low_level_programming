#include "lists.h"

/**
* insert_nodeint_at_index - insert new node
* @head: head
* @idx: position/index in list where new node is to be put
* @n: contents of new node
* Return: address of new node & NULL if fail/invalid index
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *x, *sum;
	unsigned int y = 0;

	sum = malloc(sizeof(listint_t));

	if (sum == NULL)
		return (NULL);

	x = *head;

	sum->n = n;

	if (idx == 0)
	{
		sum->next = *head, *head = sum;
		return (sum);
	}

	for (; y != idx - 1; y++)
	{
		if (y < idx && x->next == NULL)
			return (NULL);
		x = x->next;
	}

	if (x->next != NULL)
		sum->next = x->next, x->next = sum;
	else
		x->next = sum, sum->next = NULL;

	return (sum);
}
