#include "lists.h"

/**
* free_listint - free linked list
* @head: head
* Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *area;

	for (; head;)
	{
		area = head->next;
		free(head);
		head = area;
	}
}
