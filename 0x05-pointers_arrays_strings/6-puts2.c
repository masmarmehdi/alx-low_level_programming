#include "main.h"
/**
 * puts2 - void function
 * @str: char pointer
 * Description: print every other character starting from 1st one
 * Return: void
 */
void puts2(char *str)
{
	while(*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
