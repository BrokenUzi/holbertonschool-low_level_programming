#include "lists.h"

/**
* free_listint2 - free linked list & setting head to NULL
* @head: head
* Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *bighead, *area;

	if (head == NULL)
		return;

	bighead = *head;
	for (; bighead;)
	{
		area = bighead->next;
		free(bighead);
		bighead = area;
	}
	*head = bighead;
	*head = NULL;
}
