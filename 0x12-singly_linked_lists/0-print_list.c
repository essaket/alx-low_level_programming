#include "lists.h"

/**
 * length_string - a function tha retuns the length of string
 *
 * @str: input string of function
 *
 * Return: length of string
 */

int length_string(char *str)
{
	int x = 0;

	if (!str)
		return (0);
	while (*str++)
		x++;

	return (x);
}

/**
 * print_list - a function that prints all the  elements of a list_t list
 *
 * @h: input pointer of function
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int nmb_nodes = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", length_string(h->str), h->str);
		}
		nmb_nodes++;
		h = h->next;
	}

	return (nmb_nodes);
}
