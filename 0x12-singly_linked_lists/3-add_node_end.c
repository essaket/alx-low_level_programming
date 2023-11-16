#include "lists.h"

/**
 * add_node_end - a function that adds new node at the end of a linked list
 *
 * @head: input pointer of pointer in function
 * @str: input string of function
 *
 * Return: address of the new element or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_end = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !new_end)
		return (NULL);
	new_end->str = strdup(str);
	new_end->len = length_string(new_end->str);
	if (!node)
	{
		*head = new_end;
	}
	else
	{
		while (node->next)
			node = node->next;
		node->next = new_end;
	}

	return (new_end);
}
