#include "lists.h"

/**
* get_nodeint_at_index - shows node index location
* @head: head
* @index: index
* Return: pointer to node at index
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *area;
	unsigned int lilindex = 0;

	area = head;

	for (; area; lilindex++)
	{
		if (lilindex == index)
			return (area);
		area = area->next;
	}

	return (NULL);
}
