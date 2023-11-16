#include "lists.h"

/**
 * free_list - a function that trees a linked list
 *
 * @head: input pointer of function
 */

void free_list(list_t *head)
{
	list_t free_node;

	while (head)
	{
		free_node = head->next;
		free(head->str);
		free(head);
		head = free_node;
	}
}
