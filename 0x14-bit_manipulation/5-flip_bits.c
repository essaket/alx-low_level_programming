#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 *		to get from one number to another
 *
 * @n: input number of function
 * @m: input number of function
 *
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nb = 0;

	while (n || m)
	{
		if ((n & 1) != (m & 1))
			nb++;
		n >>= 1;
		m >>= 1;
	}

	return (nb);
}
