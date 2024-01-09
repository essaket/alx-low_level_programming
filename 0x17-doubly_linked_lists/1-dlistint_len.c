#include "lists.h"

/**
 * dlistint_len - function that return a num of elements in dlistint_t list
 * @h: input pointer of function
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
