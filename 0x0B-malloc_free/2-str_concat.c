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
	int i = 0, size1 = 0, size2 = 0;
	char *pnt;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	while (s1[size1] != '\0')
		size1++;

	while (s2[size2] != '\0')
		size2++;

	pnt = malloc((size1 + size2) * sizeof(char) + 1);
	if (pnt == 0)
		return (0);
	
	for (; i < size1 + size2; i++)
	{
		if (i < size1)
			pnt[i] = s1[i];
		else
			pnt[i] = s2[i - size1];
	}
	pnt[i] = '\0';

	return (pnt);
}
