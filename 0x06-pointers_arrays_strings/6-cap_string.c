#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 *
 * @x: input pointer of function
 *
 * Return: a string
 */

char *cap_string(char *x)
{
	int i = 0;

	while (x[i])
	{
		while (!(x[i] > 96 && x[i] < 123))
			i++;
		if (x[i - 1] == ',' || x[i - 1] == ' ' || x[i - 1] == '\t' ||
			x[i - 1] == '\n' || x[i - 1] == ';' || x[i - 1] == '.' ||
			x[i - 1] == '!' || x[i - 1] == '?' || x[i - 1] == '"' ||
			x[i - 1] == '(' || x[i - 1] == ')' || x[i - 1] == '{' ||
			x[i - 1] == '}' || x == 0)
			x[i] -= 32;
		i++;
	}

	return (x);
}
