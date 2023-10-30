#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - function that concatenates two strings
 *
 * @s1: input pointer of function
 * @s2: input pointer of function
 *
 * Return: a string conates
 */

char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0;
	char *pnt;

	if (s1 == NULL)
		s1 = "\0";

	if (s2 == NULL)
		s2 = "\0";

	while (s1[size1] != '\0')
		size1++;

	while (s2[size2] != '\0')
		size2++;

	pnt = malloc((size2 + size2) * sizeof(char) + 1);

	if (pnt == NULL)
		return (NULL);

	size1 = 0;
	size2 = 0;

	while(s1[size1] != '\0')
	{
		pnt[size1] = s1[size1];
		size1++;
	}

	while (s2[size2] != '\0')
	{
		pnt[size1] = s2[size2];
		size1++, size2++;
	}

	pnt[size1] = '\0';

	return (pnt);
}
