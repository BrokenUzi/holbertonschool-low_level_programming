#include "lists.h"

/**
* get_dnodeint_at_index - shows node at index location in linked list
* @head: head of object linked list
* @index: place of linked list of which we are finding the node
* Return: pointer to node at index
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int x = 0;

	temp = head;

	for (; temp; x++)
	{
		if (x == index)
			return (temp);
		temp = temp->next;
	}

	return (NULL);
}
