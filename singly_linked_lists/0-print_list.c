#include "lists.h"

/**
* size_t - prints all elements of list_t list
* print_list - all lists are printed
* @h: node head
* Return: x
*/

size_t print_list(const list_t *h)
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
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
	}
	return (x);
}
