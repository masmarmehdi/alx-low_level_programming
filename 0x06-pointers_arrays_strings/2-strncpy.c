#include "main.h"
#include <stddef.h>
/**
 * _strncpy - char pointer function
 * @dest: char pointer
 * @src: char pointer
 * @n: int
 * Description: function that copies a string
 * Return: char pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;
	if (dest == NULL)
	{
		return NULL;
	}
	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
