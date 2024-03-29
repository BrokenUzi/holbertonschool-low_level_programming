#include "lists.h"

/**
* print_dlistint - prints all elements in a listint_t
* @h: head node
* Return: number of elements, 0 if h is NULL
*/

size_t print_dlistint(const dlistint_t *h)
{
	int x = 0;

	if (h == NULL)
		return (0);

	for (; h; x++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (x);
}
