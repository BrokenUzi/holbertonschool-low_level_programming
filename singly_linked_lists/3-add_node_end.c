#include "lists.h"

/**
 * add_node_end - create node & add it at the end of our linked list
 * @head: pointer to head of linked list
 * @s1: name of the new node
 * Return: address of new node, NULL if mem alloc fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int x = 0;
	list_t *end_node;
	list_t *position;

	end_node = malloc(sizeof(list_t));

	if (end_node == NULL)
		return (NULL);

	for (; str[x]; x++)
		;

	end_node->str = strdup(str);
	end_node->len = x;
	end_node->next = NULL;

	if (*head == NULL)
		*head = end_node;
	else
	{
		position = *head;

		for (; position->next;)
			position = position->next;

		position->next = end_node;
	}

	return (end_node);
}
