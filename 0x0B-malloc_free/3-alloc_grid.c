#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - function that returns a pointer to a 2 dimmensional
 *			array of integers
 *
 * @width: input of function
 * @height: input of function
 *
 * Return: a pointer
 */

int **alloc_grid(int width, int height)
{
	int **pnt, x, y;

	pnt = malloc(height * sizeof(*pnt));

	if (pnt == NULL)
	{
		return (NULL);
	}
	else
	{
		for (x = 0; x < height; x++)
		{
			pnt[x] = malloc(width * sizeof(**pnt));
			if (pnt[x] == 0)
			{
				for (; x >= 0; x--)
					free(pnt[x]);

				free(pnt);

				return (NULL);
			}

			for (y = 0; y < width; y++)
				pnt[x][y] = 0;
		}
	}

	return (pnt);
}
