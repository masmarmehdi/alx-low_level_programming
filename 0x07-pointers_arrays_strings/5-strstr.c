#include "main.h"
#include <stddef.h>
/**
 * _strstr - str function
 * @haystack: str
 * @needle: str
 * Description: locates a substring
 * Return: str
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		if (*haystack == *needle)
		{
			return (haystack);
		}
	}
	return (NULL);
}
