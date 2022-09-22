#include "main.h"
/**
 * _strcmp - int function
 * @s1: char pointer
 * @s2: char pointer
 * Description: Compare 2 strings
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		s1++;
		s2++;
	}
	return (s1[i] - s2[i]);
}
