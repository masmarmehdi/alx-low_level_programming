#include "main.h"
#include <stdlib.h>

/**
 * _strdup - str function
 * @str: str
 *
 * Return: NULL if str is NULL or insufficient memory. Otherwise pointer
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	s = malloc(sizeof(str) * len);

	for (i = 0; str[i] != '\0'; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
