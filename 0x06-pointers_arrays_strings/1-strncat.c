#include "main.h"
/**
 * _strncat - char pointer function
 * @dest: char pointer
 * @src: char pointer
 * @n: int
 * Description: concatenate two strings with limitation
 * Return: char pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0' && j < n; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return dest;
}
