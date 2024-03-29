#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning
 *
 * @head: a pointer of pointer of function
 * @n: a value of new node
 *
 * Return: a new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!head || !new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
