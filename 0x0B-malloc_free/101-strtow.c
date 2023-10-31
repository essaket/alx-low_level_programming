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
char **matrix, *tmp;
int i, k = 0, len = 0, words, c = 0, start, end;
while (*(str + len))
len++;
words = length_words(str);
if (words == 0)
return (NULL);
matrix = (char **) malloc(sizeof(char *) * (words + 1));
if (matrix == NULL)
return (NULL);
for (i = 0; i <= len; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (c)
{
end = i;
tmp = (char *) malloc(sizeof(char) * (c + 1));
if (tmp == NULL)
return (NULL);
while (start < end)
*tmp++ = str[start++];
*tmp = '\0';
matrix[k] = tmp - c;
k++;
c = 0;
}
}
else if (c++ == 0)
start = i;
}
matrix[k] = NULL;
return (matrix);
}
