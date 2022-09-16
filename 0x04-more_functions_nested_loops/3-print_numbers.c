#include "main.h"
/**
 * print_numbers - void function
 * Description: printing numbers from 0 to 9
 * Return: nothing
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
