#include "lists.h"

/**
 * list_len - a function that return the number of elements in a linked list
 *
 * @h: input pointer of function
 *
 * Return: number of elements in a list_t
 */

size_t list_len(const list_t *h)
{
	int nmb_elm = 0;

	while (h)
	{
		h = h->next;
		nmb_elm++;
	}

	return (nmb_elm);
}
