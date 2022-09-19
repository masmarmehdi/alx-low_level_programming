#include "main.h"
/**
 * _strlen - int function
 * @s: char pointer
 * Description: _strlen
 * Return: int
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	return (count);
}
