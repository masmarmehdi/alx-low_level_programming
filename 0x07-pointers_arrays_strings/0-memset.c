#include "main.h"
#include <stdio.h>
/**
 * _memset - char pointer function
 * @s: str
 * @b: char
 * @n: unsigned int n
 * Description: fills memory with a constant byte
 * Return: str
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
