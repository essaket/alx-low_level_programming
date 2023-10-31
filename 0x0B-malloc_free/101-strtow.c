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
	int i, x = 0;

	for (i = 0; c[i]; i++)
	{
		if (c[i] == ' ')
		{
			if (c[i + 1] != ' ' && c[i + 1] != '\0')
				x++;
		}
		else if (i == 0)
			x++;
	}
	x++;

	return (x);
}

/**
 * **strtow - function that splits a string into words
 *
 * @str: input pointer of function
 *
 * Return: a pointer to an array of strings
 */

char **strtow(char *str)
{
	int i = 0, j, k, l, len = 0, wr = 0;
	char **pnt;

	if (str == NULL || *str == '\0')
		return (NULL);
	len = length_words(str);
	if (len <= 1)
		return (NULL);
	pnt = (char **)malloc(len * sizeof(char *));
	if (pnt == NULL)
		return (NULL);
	pnt[len - 1] = NULL;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			pnt[wr] = (char *)malloc(j * sizeof(char));
			j--;
			if (pnt[wr] == NULL)
			{
				for (k = 0; k < wr; k++)
					free(pnt[k]);
				free(pnt[len - 1]);
				free(pnt);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				pnt[wr][l] = str[i + l];
			pnt[wr][l] = '\0';
			wr++;
			i += j;
		}
		else
			j++;
	}
	return (pnt);
}
