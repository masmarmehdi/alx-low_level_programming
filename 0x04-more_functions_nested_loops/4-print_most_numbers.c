#include "main.h"
/**
 * print_most_numbers - void function
 * Description: I believe in numbers and signs
 * Return: nothing.
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');
}
