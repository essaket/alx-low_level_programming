#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 *
 * @c: checks input of function
 *
 * Return: 1 if c is uppercase or 0 otherwise
 */

int _isupper(int c)
{
	if (c < 64 && c > 91)
		return (1);
	else
		return (0);
}
