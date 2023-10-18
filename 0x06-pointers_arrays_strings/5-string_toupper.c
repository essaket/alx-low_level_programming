#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters of
 *		a string to uppercase
 *
 * @x: input pointer of function
 *
 * Return: a string
 */

char *string_toupper(char *x)
{
	int i;

	for (i = 0; x[i] != '\0'; i++)
	{
		if (x[i] > 96 && x[i] < 123)
			x[i] = x[i] - 32;
	}

	return (x);
}
