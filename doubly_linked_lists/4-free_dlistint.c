#include "lists.h"

/**
* free_dlistint - free linked list
* @head: head of linked list
* Return: void
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	for (; head;)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
