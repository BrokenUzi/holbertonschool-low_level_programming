#include "lists.h"

/**
*
*
*
*/

list_t *add_node(list_t **head, const char *str)
{
	struct node* newNode = (struct node*) malloc(sizeof(struct node));
	newNode->data  = str;
	newNode->next = head;
	head = newNode;
}
