#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes a node trough index
 * @head: head of list
 * @index: index of node
 * Return: 1 if succeeded or -1 if not
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *d_node = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	for (; i < index; i++)
	{
		if (d_node == NULL)
			return (-1);
		d_node = d_node->next;
	}
	if (d_node == *head)
	{
		*head = d_node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		d_node->prev->next = d_node->next;
		if (d_node->next != NULL)
			d_node->next->prev = d_node->prev;
	}
	free(d_node);
	return (1);
}
