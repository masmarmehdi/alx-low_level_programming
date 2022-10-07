#include "main.h"
#include <stdlib.h>

/**
 * array_range - array of int
 * @min: int
 * @max: int
 *
 * Return: NULL if malloc fails or min > max. otherwise array of int
 */
int *array_range(int min, int max)
{
	int i;
	int *a;

	if (min > max)
	{
		return (NULL);
	}
	a = (int *)calloc(max, sizeof(int *));
	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= max; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}
