#include "function_pointers.h"

/**
 * array_iterator - void function
 * @array: array of int
 * @size: size of array
 * @action: void function pointer
 *
 * Return: nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
