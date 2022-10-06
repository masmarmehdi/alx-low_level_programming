#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - str function
 * @ac: int
 * @av: array of str
 *
 * Return: str
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 1;
	char *s;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
	}
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	s = malloc(sizeof(char) * len);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (s);
}
