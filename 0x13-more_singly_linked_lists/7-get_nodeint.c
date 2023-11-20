#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 *
 * @head: pointer of function
 * @index: an index of node
 *
 * Return: thr nth node of listint_t list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int n = 0;

	while (node && n < index)
	{
		node = node->next;
		n++;
	}

	return (node ? node : NULL);
}
