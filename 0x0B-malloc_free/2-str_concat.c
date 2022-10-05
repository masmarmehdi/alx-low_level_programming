#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - str function
 * @s1: str
 * @s2: str
 *
 * Return: NULL on failure or empty str. otherwise str
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int len_s1 = 0, len_s2 = 0, i, sum;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s1 == NULL)
	{
		s2 = "";
	}
	while (s1[len_s1] != '\0')
	{
		len_s1++;
	}
	while (s2[len_s2] != '\0')
	{
		len_s2++;
	}
	sum = len_s1 + len_s2;
	s = malloc(sizeof(char) * (sum + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < sum; i++)
	{
		if (i < len_s1)
		{
			s[i] = *s1;
			s1++;
		}
		else
		{
			s[i] = *s2;
			s2++;
		}
	}
	s[i] = '\0';
	return (s);
}
