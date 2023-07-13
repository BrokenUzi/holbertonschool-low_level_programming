#include "lists.h"

/**
* list_len - returns the # of elements in a linked list
* @h: Head of node
* Return: x
*/

size_t list_len(const list_t *h)
{
	int x = 0;
	char *s1 = NULL;

	if (h == NULL)
	{
		return (0);
	}
	for (; h; x++)
	{
		s1 = h->str;
		if (s1 != NULL)
		h = h->next;
	}
	return (x);
}
