#include "lists.h"

/**
 * free_listint - a function that frees a linked list
 *
 * @head: pointer of function
 *
 * Return: a void
 */

void free_listint(listint_t *head)
{
	listint_t *free_node;

	while (head)
	{
		free_node = head;
		head = head->next;
		free(free_node);
	}
}
