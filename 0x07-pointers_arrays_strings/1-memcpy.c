#include "main.h"
/**
 * _memcpy - char pointer function
 * @dest: str
 * @src: str
 * @n: unsigned int
 * Description: copies memory area
 * Return: str
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
