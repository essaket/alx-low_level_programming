#include "function_pointers.h"

/**
 * print_name - function that prints a name
 *
 * @name: input of function
 * @f: input function pointer of function
 *
 * Return: a void
 */

void print_name(char *name, void (*f)(char *))
{
	if (!(name && f))
		return;

	(*f)(name);
}
