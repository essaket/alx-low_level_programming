#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * length_words - function that counts the number of words in a string
 *
 * @c: input string of function
 *
 * Return: number of words
 */

int length_words(char *c)
{
	int i, j, k;

	i = 0;
	k = 0;
	for (j = 0; c[j] != '\0'; j++)
	{
		if (c[j] == ' ')
		{
			i = 0;
		}
		else
		{
			if (i == 0)
			{
				i = 1;
				k++;
			}
		}
	}
	return (k);
}

/**
 * **strtow - function that splits a string into words
 *
 * @str: input pointer of function
 *
 * Return: a pointer to an array of strings
 */

har **strtow(char *str)
{
	char **pnt, *pt;
	int i, k = 0, len = 0, w, c = 0, s, e;

	while (*(str + len))
		len++;
	w = length_words(str);
	if (w == 0)
		return (NULL);
	pnt = (char **) malloc(sizeof(char *) * (w + 1));
	if (pnt == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				e = i;
				pt = (char *) malloc(sizeof(char) * (c + 1));
				if (pt == NULL)
					return (NULL);
				while (s < e)
					*pt++ = str[s++];
				*pt = '\0';
				pnt[k] = pt - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			s = i;
	}
	pnt[k] = NULL;

	return (pnt);
}
