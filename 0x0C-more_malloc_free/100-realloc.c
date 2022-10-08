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
	if (ptr == NULL)
	{
		return (NULL);
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
	if (new_size > old_size)
	{
		free(ptr);
		ptr = malloc(new_size);
		if (ptr == NULL)
		{
			return (NULL);
		}
	}
	return (ptr);
}
