#include "lists.h"

/**
 * _Node - function that reallocates memory for an array of pointers
 *
 * @node: the old list
 * @index: size of the new list
 * @node1: new node
 *
 * Return: pointer to the new list
 */

const listint_t **_Node(const listint_t **node, size_t index, const listint_t *node1)
{
	const listint_t **new;
	size_t i;

	new = malloc(index * sizeof(listint_t *));
	if (new == NULL)
	{
		free(node);
		exit(98);
	}
	for (i = 0; i < index - 1; i++)
		new[i] = node[i];
	new[i] = node1;
	free(node);

	return (new);
}

/**
 * print_listint_safe - function that prints a linked list
 *
 * @head: address of pointer of function
 *
 * Return: number of node
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i, index = 0;
	const listint_t **node = NULL;

	while (!head)
	{
		for (i = 0; i < index; i++)
		{
			if (head == node[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				return (index);
			}
		}
		index++;
		node = _Node(node, index, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}

	return (index);
}
