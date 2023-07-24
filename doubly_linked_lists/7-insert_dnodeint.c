#include "lists.h"

/**
* insert_dnodeint_at_index - inserts a new node at specifc index
* @h : head node
* @idx : index
* @n : new node
* Return: NULL if failed, nwnd (NewNode) if success
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *slot;
	dlistint_t *nwnd = NULL;

	nwnd = malloc(sizeof(dlistint_t));
	slot = *h;

	for (i = 0; slot && i < idx - 1; i++)
		slot = slot->next;

	if (nwnd != NULL)
	{
		nwnd->n = n;
		if (idx == 0)
		{
			nwnd->next = *h;
			nwnd->prev = NULL;
			if (*h != NULL)
				(*h)->prev = nwnd;
			*h = nwnd;
			return (nwnd);
		}
		if (i + 1 == idx)
		{
			nwnd->next = slot->next;
			nwnd->prev = slot;
			if (slot->next != NULL)
				slot->next->prev = nwnd;
			slot->next = nwnd;
			return (nwnd);
		}
	}
free(nwnd);
return (NULL);
}
