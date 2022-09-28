#include "main.h"
/**
 * _print_rev_recursion - void function
 * @s: str
 * Description: prints a string in reverse using recursion
 * Return: nothing.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
