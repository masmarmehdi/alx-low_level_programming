#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - str function
 * @size: unsigned int
 * @c: char
 *
 * Return: NULL is size is 0 or fail. pointer to array if no error
 */
char *create_array(unsigned int size, char c)
{
	char *result;
	unsigned int  i;

	result = malloc(sizeof(char) * size);
	if (size == 0 || result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		result[i] = c;
	}
	return (result);

}
