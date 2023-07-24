#include "lists.h"

/**
* dlistint_len - prints number of elements in nodes
* @h: head node
* Return: number of elements, 0 if h is NULL
*/

size_t dlistint_len(const dlistint_t *h)
{
	int y = 0;

	if (h == NULL)
		return (0);

	for (; h; y++)
		h = h->next;

	return (y);
}
