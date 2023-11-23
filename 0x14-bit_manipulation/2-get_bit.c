#include "main.h"

/**
 * get_bit - function that returns the value a bit at a given index
 *
 * @n: input number of function
 * @index: an index of function
 *
 * Return: the value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (n == 0)
		return (0);
	for (; i < 64; i++)
	{
		if (index == i)
			return (n >> index & 1);
	}

	return (-1);
}
