#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return: 1 if little endian or 0 if big endian
 */

int get_endianness(void)
{
	char *x = (char *)&1;

	if (*x)
		return (1);
	return (0);
}
