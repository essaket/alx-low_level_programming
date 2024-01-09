#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node trough index
 * @h: head of list
 * @idx: an index
 * @n: input data
 * Return: the address of the new node or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *node = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx != 1; idx--)
	{
		if (node = NULL)
			return (NULL);
		node = node->next;
	}
	if (node->next = NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = node->next;
	new_node->prev = node;
	node->next = new_node;
	node->next->prev = new_node;

	return (new_noe);
}
