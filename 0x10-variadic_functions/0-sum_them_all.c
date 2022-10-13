#include "variadic_functions.h"

/**
 * sum_them_all - int function
 * @n: const unsigned int
 *
 * Return: 0 or sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int sum = 0, i;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, unsigned int);
	}
	return (sum);
}
