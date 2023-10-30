#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid previously
 *		created by your alloc_grid function
 *
 * @grid: input of function
 * @height: input of function
 *
 * Return: 0 for success
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
