#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @array: input pointer of function
 * @size: input of function
 * @cmp: input function pointers of function
 *
 * Return: 0 or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int *pnt = array + size;
	int i = 0;

	if (array && size && cmp)
		while (i < pnt)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}

	return (-1);
}
