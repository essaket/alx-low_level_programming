#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 *
 * @head: address to pointer of function
 *
 * Return: the address or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s = head, *f = head;

	if (!head)
		return (NULL);

	while (s && f && f->next)
	{
		f = f->next->next;
		s = s->next;
		if (f == s)
		{
			s = head;
			while (s != f)
			{
				s = s->next;
				f = f->next;
			}
			return (f);
		}
	}

	return  (NULL);
}
