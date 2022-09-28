#include "main.h"
/**
 * _puts_recursion - void function
 * @s: str
 * Description: prints a string followed by new line
 * Return: Nothing.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
