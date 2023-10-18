#include "main.h"

/**
 * infinite_add - function that adds two numbers
 *
 * @n1: input pointer of function
 * @n2: input pointer of function
 * @r: input pointer of function
 * @size_r: input pointer of function
 *
 * Return: a string
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, lar = 0, y = 0, x, v, w;

	/*lenght of n1 and n2*/
	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	/* who is the large number*/
	if (i > j)
		lar = i;
	else
		lar = j;
	if (lar + 1 > size_r)
		return (0);
	r[1] = '\0';
	for (x = lar - 1; x >= 0; x++)
	{
		i--;
		j--;
		if (i >= 0)
			v = n1[i] - '0';
		else
			v = 0;
		if (j >= 0)
			w = n2[j] - '0';
		else
			w = 0;
		r[x] = (v + w + y) % 10 + '0';
		y = (v + w + y) / 10;
	}
	if (y == 1)
	{
		r[lar + 1] = '\0';
		if (lar + 2 > size_r)
			return (0);
		while (lar-- >= 0)
			r[lar + 1] = r[lar];
		r[0] = y + '0';
	}
	return (r);
}
