#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* add_node_end - add's a new node at the end
* @head: head of node
* @str: string
* Return: Head
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node;
	list_t *position;

end_node = malloc(sizeof(list_t));

	if (end_node == NULL)
	{
		return (NULL);
	}

end_node->str = strdup(str);
end_node->len = strlen(str);
end_node->next = NULL;

	if (head == NULL)
	{
		*head = end_node;
	}

	else
	{
		position = *head;

		for (; position->next;)
			position = position->next;

		position->next = end_node;
	}

return (end_node);
}
