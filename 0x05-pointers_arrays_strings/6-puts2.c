#include "main.h"
/**
 * puts2 - void function
 * @str: char pointer
 * Description: print every other character starting from 1st one
 * Return: void
 */
void puts2(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
