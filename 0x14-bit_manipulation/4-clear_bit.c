#include "main.h"

/**
 * clear_bit - int function
 * @n: unsigned long int pointer
 * @index: unsigned int
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index < 63)
	{
		m = 1 << index;

		if (*n & m)
		{
			*n ^= m;
		}
		return (1);
	}
	return (-1);
}
