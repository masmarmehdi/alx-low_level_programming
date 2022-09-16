#include "main.h"
/**
 * _isupper - int function
 * @c: integer input
 * Description: isupper
 * Return: 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
