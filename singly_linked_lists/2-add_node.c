#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* add_node - add's a new node at the beginning
* @head: head of node
* @str: string
* Return: Head
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
new_node->str = strdup(str);
new_node->len = strlen(str);
new_node->next = *head;
*head = new_node;

return (new_node);
}
