#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - 2d array of int
 * @width: int
 * @height: int
 *
 * Return: NULL on failure, negative or 0. Otherwise return 2d array.
 */
int **alloc_grid(int width, int height)
{
	int i, j, h, k;
	int **a;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(int *) * height);
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (h = 0; h < height; h++)
	{
		a[h] = malloc(sizeof(int) * width);
		if (a[h] == NULL)
		{
			for (k = h; k >= 0; k--)
			{
				free(a[k]);
			}

			free(a);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
