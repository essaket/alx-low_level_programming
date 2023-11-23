#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 *
 * @b: input pointer of function
 *
 * Return: the converted number or NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int nmb = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		nmb = nmb * 2 + (*b++ - '0');
	}

	return (nmb);
}
