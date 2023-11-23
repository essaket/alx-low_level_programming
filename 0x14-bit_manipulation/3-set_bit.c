#include "main.h"

/**
 * set_bit - function that sets the vaue of a bit to 1 at a given index
 *
 * @n: input pointer of function
 * @index: input index of function
 *
 * Return: 1 for success or -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x = 1;

	if (index >= 64)
		return (-1);
	x <<= index;
	*n |= x;

	return (1);
}
