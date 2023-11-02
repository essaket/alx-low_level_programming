#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - function that concatenates two strings
 *
 * @s1: input array of function
 * @s2: input array of function
 * @n: input of function
 *
 * Return: a pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, k, len1, len2;
	char *pnt;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	pnt = malloc(len1 + n + 1);
	if (pnt == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		pnt[i] = s1[i];
	for (k = 0; k < n; k++)
	{
		pnt[i] = s2[k];
		i++;
	}
	pnt[i] = '\0';

	return (pnt);
}
