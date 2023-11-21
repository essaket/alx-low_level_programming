#include "lists.h"

/**
 * reverse_listint - function that reverses a linked list
 *
 * @head: addreaa of pointer of function
 *
 * Return: a pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node1 = NULL, *node2 = NULL;

	while (*head)
	{
		node1 = (*head)->next;
		(*head)->next = node2;
		node2 = *head;
		*head = node1;
	}

	return (*head);
}
