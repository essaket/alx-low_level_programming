#include "lists.h"

/**
 * add_nodeint_end - function that adds new node at the end
 *
 * @head: pointer of pointer of function
 * @n: valude of new node
 *
 * Return: a new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node_end = malloc(sizeof(listint_t));
	listint_t *node = *head;

	if (!head || !new_node_end)
		return (NULL);

	new_node_end->n = n;
	new_node_end->next = NULL;
	if (!node)
	{
		*head = new_node_end;
	}
	else
	{
		while (node->next)
			node = node->next;
		node->next = new_node_end;
	}

	return (new_node_end);
}
