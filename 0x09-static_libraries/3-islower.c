#include "main.h"

/**
 * _islower - check for lowercase character
 *
 * @c: checks input of function
 *
 * Return: Always 0
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	return (0);
}
