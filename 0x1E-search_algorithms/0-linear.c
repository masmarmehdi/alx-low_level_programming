#include <stdio.h>

/**
 * linear_search - Linear search
 * Description: Function that search for a value in array of integers.
 * @array: pointer to the first element of the array to search in
 * @size: size of the array
 * @value: value to look for
 * Return: the index of the value found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
	}
	else
	{
		return (-1);
	}
	return (-1);
}
