#include "main.h"
#include <stdlib.h>

/**
 * free_grid - void function
 * @grid: 2d array
 * @height: int
 *
 * Return: nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free((int *)grid[i]);
	}
	free(grid);
}
