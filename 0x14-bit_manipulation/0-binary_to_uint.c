#include "main.h"

/**
 * binary_to_uint - unsigned int function
 * @b: str
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int len = 0, base_two;

	if (!b)
	{
		return (0);
	}
	ui = 0;

	while (b[len] != '\0')
	{
		len++;
	}

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			ui += base_two;
		}
	}

	return (ui);
}
