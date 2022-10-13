#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - void function
 * @separator: const str
 * @n: const unsigned int
 *
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (separator != NULL)
	{
		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			int value = va_arg(args, int);

			printf("%d", value);
			if (i != n - 1)
			{
				printf("%s", separator);
			}
		}
		printf("\n");
		va_end(args);
	}
}
