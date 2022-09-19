#include "main.h"
/**
 * _puts - void function
 * @str: char pointer
 * Description: I do not fear computers. I fear the lack of them
 * Return: void.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
