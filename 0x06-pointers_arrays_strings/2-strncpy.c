#include "main.h"
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
	int i = 0;
	while (src[i] && i != n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
