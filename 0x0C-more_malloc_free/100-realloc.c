#include "main.h"
#include <stdlib.h>

/**
 * _realloc - void ptr
 * @ptr: void ptr
 * @old_size: unsigned int
 * @new_size: unsigned int
 *
 * Return: NULL or ptr depends on the case.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *temp, *new_location;
	unsigned int i;

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
		{
			return (NULL);
		}
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	new_location = malloc(new_size);
	temp = ptr;
	if (old_size > new_size)
	{
		old_size = new_size;
	}
	for (i = 0; i < old_size; i++)
	{
		new_location[i] = temp[i];
	}
	free(ptr);
	return (new_location);
}
