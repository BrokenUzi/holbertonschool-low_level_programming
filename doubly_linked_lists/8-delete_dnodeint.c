#include "lists.h"

/**
* delete_dnodeint_at_index - deletes node at specified index
* @head: head of dlistint_t linked list
* @index: node index of linked list to be deleted
* Return: 1 if success, -1 if failure
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *delete;
	unsigned int idx = 0;

	if (*head == NULL)
		return (-1);

	temp = *head, delete = *head;

	if (index == 0)
	{
		if ((*head)->next != NULL)
			(*head)->next->prev = NULL;
		free(delete);
		*head = (*head)->next;
	}

	else
	{
		for (; idx != index - 1; idx++)
		{
			if (idx < index && temp->next == NULL)
				return (-1);
			temp = temp->next;
		}

		delete = temp->next;

		if (delete->next != NULL)
		{
			temp->next = delete->next;
			delete->next->prev = temp;
			free(delete);
		}
		else
		{
			temp->next = NULL;
			free(delete);
		}
	}

	return (1);
}
