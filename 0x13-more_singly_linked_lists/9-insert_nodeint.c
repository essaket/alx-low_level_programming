#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node with index
 *
 * @head: address of pointer of function
 * @idx: the index of the list
 * @n: value of new node
 *
 * Return: the address of new node or NULL of failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *insert_node = malloc(sizeof(listint_t));
	unsigned int x = 0;

	if (!head || !insert_node)
		return (NULL);

	insert_node->n = n;
	insert_node->next = NULL;
	if (!idx)
	{
		insert_node->next = *head;
		*head = insert_node;
		return (insert_node);
	}
	node = *head;
	while (node)
	{
		if (x == idx - 1)
		{
			insert_node->next = node->next;
			node->next = insert_node;
			return (insert_node);
		}
		node = node->next;
		x++;
	}
	return (NULL);
}
