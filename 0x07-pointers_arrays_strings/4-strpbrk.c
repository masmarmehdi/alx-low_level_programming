#include "main.h"
/**
 * _strpbrk - string function
 * @s: str
 * @accept: str
 * Description: searches a string for any of a set of bytes
 * Return: str
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	for (; *s != '\0'; s++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == *s)
			{
				return (s);
			}
		}
	}
	return (s);
}
