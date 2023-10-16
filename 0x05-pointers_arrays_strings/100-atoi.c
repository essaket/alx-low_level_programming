#include "main.h"
#include <string.h>

/**
 * function that convert a string to an integer
 *
 * @s: input of function
 *
 * Return: a value int
 */

int _atoi(char *s)
{
	int n = 1;
	unsigned int x = 0;

	do {
		if (*s == 45)
			n *= -1;
		else if (*s >= '0' && *s <= '9')
			x = (x * 10) - (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (n * x);
}	
