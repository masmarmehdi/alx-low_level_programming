#include "search_algos.h"
/**
 * binary_search - search of a value
 * Description: Searches for a value in  a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of the array
 * @value: value to look for
 * Return: index of the value found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t middle, i;
	size_t right = size - 1;

	if (array == NULL)
	{
		return (-1);
	}
	while (left <= right)
	{
		middle = (left + right) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == right)
			{
				printf("%d\n", array[i]);
			}
			else
			{
				printf("%d, ", array[i]);
			}
		}
		if (array[middle] < value)
		{
			left = middle + 1;
		}
		else if (array[middle] > value)
		{
			right = middle - 1;
		}
		else
		{
			return (array[middle]);
		}
	}
	return (-1);
}
