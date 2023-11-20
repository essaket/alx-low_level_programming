#include "lists.h"

/**
 * delete_nodeint_at_index - function that delete a node at index
 *
 * @head: address of pointer of function
 * @index: index of node
 *
 * Return: 1 if success or -1 if not
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node1 = *head, *node2 = NULL;
	unsigned int x = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		*head = (*head)->next;
		free(node1);
		return (1);
	}
	while (node1)
	{
		if (x == index)
		{
			node2->next = node1->next;
			free(node1);
			return (1);
		}
		node2 = node1;
		node1 = node1->next;
		x++;
	}

	return (-1);
}
