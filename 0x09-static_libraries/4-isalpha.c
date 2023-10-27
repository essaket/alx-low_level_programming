#include "main.h"

/**
 * _isalpha - is a function that checks if character is letter
 *            lowercase or uppercase
 *
 * @c: checks to print function
 *
 * Return: Always 0
 */

int _isalpha(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	if (c > 96 && c < 123)
	{
		return (1);
	}
	return (0);
}
