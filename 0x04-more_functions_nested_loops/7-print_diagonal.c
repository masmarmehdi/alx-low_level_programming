#include "main.h"
/**
 * print_diagonal - void function
 * @n: int input
 * Description: I feel like I am diagonally parked in a parallel universe
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i, j;
	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		for (j = i; j > 0; j--)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
