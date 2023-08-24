#include "lists.h"

/**
* sum_listint - calculate sum of nodes
* @head: head
* Return: sum of nodes
*/

int sum_listint(listint_t *head)
{
	listint_t *x;
	unsigned int sum = 0;

	if (head == NULL)
		return (0);

	x = head;

	for (; x->next;)
	{
		sum += x->n;
		x = x->next;
	}

	sum += x->n;

	return (sum);
}
