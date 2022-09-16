#include "main.h"
/**
 * print_triangle - void function
 * @size: int input
 * Description: Triangles
 * Return: nothing.
 */
void print_triangle(int size)
{
	int i, j;
	int n = size - 1;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < n)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			n--;
			_putchar('\n');
		}
	}
}
