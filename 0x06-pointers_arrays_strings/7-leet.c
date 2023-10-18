#include "main.h"

/**
 * leet - function that encodes a string into 1337
 *
 * @x: input pointer of function
 *
 * Return: a string
 */

char *leet(char *x)
{
	int i, j;
	char c1[] = "AaEaOoTtLl";
	char c2[] = "4433007711";

	for ( ; x[i] != '\0'; x++)
	{
		for ( ; j < 10; j++)
		{
			if (x[i] == c1[j])
				x[i] = c2[j]
		}
	}

	return (x);
}
