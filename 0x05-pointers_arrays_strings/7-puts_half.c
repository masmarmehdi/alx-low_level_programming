#include "main.h"
/**
 * puts_half - void function
 * @str: char pointer
 * Description: puts half
 * Return: void.
 */
void puts_half(char *str)
{
	int len = 0;
	int i, n;

	while (str[len] != '\0')
	{
		len++;
	}
	n = (len - 1) / 2;
	for (i = n + 1; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
