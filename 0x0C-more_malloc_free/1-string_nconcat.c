#include "main.h"
#include <stdlib.h>

/**
 * string_concat -  str function
 * @s1: str
 * @s2: str
 * @n: unsigned int
 *
 * Return: str
 */
char * string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int len = 0, i, j;

	while (s1[len] != '\0')
	{
		len++;
	}
	s = malloc(sizeof(char) * (n + len) + 1);

	for (i = 0, j = 0; i < n + len; i++)
	{
		if (i < len)
		{
			s[i] = s1[i];
		}
		else
		{
			s[i] = s2[j];
			j++;
		}
	}
	s[i] = '\0';
	return (s);
}
