#include "main.h"
#include <stdlib.h>

/**
 * _calloc - void pointer function
 * @nmemb: unsigned int
 * @size: unsigned int
 *
 * Return: NUll if nmemb or size is 0. otherwiser pointer to alloc mem
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *alloc;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	alloc = malloc(nmemb * size);
	if (alloc == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		*(alloc + i) = 0;
	}
	return (alloc);
}
