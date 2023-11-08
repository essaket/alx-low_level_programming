#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a
 *			parameter on each element of an array
 *
 * @array: input pointer of function
 * @size: input of function
 * @action: input function pointers of function
 *
 * Return: a void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
