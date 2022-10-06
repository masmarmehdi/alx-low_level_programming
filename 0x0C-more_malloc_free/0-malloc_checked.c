#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * malloc_checked - void function
 * @b: unsigned int
 *
 * Return: nothing.
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
