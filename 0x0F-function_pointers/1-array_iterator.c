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
	/**int *pnt = array + size;

	if (array && size && action)
		while (array < pnt)
			action(*array++);
	*/

	int i = 0;

	if (array && size && action)
		for (; i < size; i++)
			action(array[i]);
