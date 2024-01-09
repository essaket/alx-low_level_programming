#include "lists.h"

/**
 * add_dnodeint_end - function that dds a new node at the end of a dlistint_t
 * @head: head of linked list
 * @n: input of linked list
 * Return: the address of the new element or NULL if if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = new_node;
		new_node->prev = node;
	}
	return (new_node);
}
