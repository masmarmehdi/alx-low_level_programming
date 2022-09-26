#include "main.h"
#include <stddef.h>
/**
 * _strchr - char pointer function
 * @s: str
 * @c: char
 * Description: locates a character in a string
 * Return: str
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (NULL);
}
