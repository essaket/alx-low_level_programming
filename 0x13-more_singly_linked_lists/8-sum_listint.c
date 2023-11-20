#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data
 *
 * @head: pointer of function
 *
 * Return: the sum of all data
 */

int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
