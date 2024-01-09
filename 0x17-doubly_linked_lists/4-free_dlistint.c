#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: head of doubly linked list
 * Return: a void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *fr;

	while (!*head)
	{
		fr = head->next;
		free(head);
		head = fr;
	}
}
