#include "main.h"
/**
 * print_line - void function
 * @n: int input
 * Description: The shortest distance between two points is a straight line
 * Return: nothing
 */
void print_line(int n)
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		_putchar('_');
	}
	_putchar('\n');
}
