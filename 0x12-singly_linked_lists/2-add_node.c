#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a linked list
 *
 * @head: input pointer of pointer
 * @str: input pointer of function
 *
 * Return: address of the new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	new_head = malloc(sizeof(list_t));

	if (!head || !new_head)
		return (NULL);
	new_head->str = strdup(str);
	new_head->len = length_string(new_head->str);
	new_head->next = *head;
	*head = new_head;

	return (new_head); /* or return (*head)*/
}
