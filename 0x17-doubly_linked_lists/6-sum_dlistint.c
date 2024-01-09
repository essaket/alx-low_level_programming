#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all data of a list
 * @head: head of list
 * Return: sum of all data or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
