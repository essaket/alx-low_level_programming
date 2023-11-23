#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return: 1 if little endian or 0 if big endian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *x = (char *)&i;

	if (*x)
		return (1);
	return (0);
}
