#include "main.h"
/**
 * print_last_digit - print last digit
 * @n: int argument
 * Description: Write a function that prints the last digit of a number.
 * Return: Returns the value of the last digit.
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -1 * (n % 10);
	}
	else
	{
		n = n % 10;
	}
	_putchar((n % 10) + '0');
	return (n % 10);
}
