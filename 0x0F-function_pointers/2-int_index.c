#include "function_pointers.h"

/**
 * int_index - int funciton
 * @array: array of int
 * @size: int
 * @cmp: int function pointer
 *
 * Return: -1 or the index.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
