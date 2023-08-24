#include "lists.h"

/**
* delete_nodeint_at_index - deletes node at specified spot
* @head: head
* @index: node to be deleted
* Return: 1 if success else -1
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *x, *delete;
	unsigned int lilindex = 0;

	if (*head == NULL)
		return (-1);

	x = *head, delete = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(delete);
	}
	else
		for (; x; lilindex++)
		{
			if (lilindex < index && x->next == NULL)
				return (-1);
			if (lilindex == index - 1)
			{
				delete = x->next;
				if (x->next != NULL)
					x->next = delete->next;
				free(delete);
				continue;
			}
			x = x->next;
		}

	return (1);
}
