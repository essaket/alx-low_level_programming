#include "lists.h"

/**
 * listint_len - a function thet returns the number of elements in a linked list
 *
 * @h: input pointer of function
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nmb_elem = 0;

	while (h)
	{
		h = h->next;
		nmb_elem++;
	}

	return (nmb_elem);
}
