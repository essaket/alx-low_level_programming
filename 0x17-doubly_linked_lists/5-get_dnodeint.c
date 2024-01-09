#include "lists.h"

/**
 * get_dnodeint_at_index - function that return a node through index
 * @head: head of doubly linked list
 * @index: index of node
 * Return: the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;

	while (head && x < index)
	{
		head = head->next;
		x++;
	}
	return (head);
}
