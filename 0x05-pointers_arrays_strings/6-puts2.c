#include "main.h"
#include <string.h>

/**
 * puts2 - function that prints every other character of a string
 *		with the first character
 *
 * @str: input of function
 *
 * Return: a void
 */

void puts2(char *str)
{
	int i;
	int x = strlen(str);
	char j[x / 2];

	for (i = 0; i < x ; i++)
	{
		j[i / 2] = str[i];
		i++;
	}
}
