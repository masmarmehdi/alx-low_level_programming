#include "main.h"
#include <stdlib.h>
#include <stddef.h>
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
	unsigned int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	s = malloc(sizeof(char) * (len + 1));

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';
	return (s);
}
