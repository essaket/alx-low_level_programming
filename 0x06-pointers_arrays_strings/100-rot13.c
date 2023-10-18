#include "main.h"

/**
 * rot13 - functon that encodes a string using rot13
 *
 * @x: input pointer of function
 *
 * Return: a string
 */

char *rot13(char *x)
{
	int i, j;
	char c1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char c2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; x[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (x[i] == c1[j])
			{
				x[i] = c2[j];
				break;
			}
		}
	}
	return (x);
}
