#include "lists.h"

/**
* print_listint - prints all elements in listint_t
* @h: head node
* Return: number of elements & 0 if h = NULL
*/

size_t print_listint(const listint_t *h)
{
	int x = 0, y = 0;

	if (h == NULL)
		return (0);
	for (; h; x++)
	{
		y = h->n;
		if (y)
			printf("%d\n", h->n);
		h = h->next;
	}
	return (x);
}
