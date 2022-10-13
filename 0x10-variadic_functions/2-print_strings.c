#include "variadic_functions.h"

/**
 * print_strings - void function
 * @separator: const str
 * @n: const unsigned int
 *
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *value;

	va_start(args, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			value = va_arg(args, char*);
			if (value == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", value);
			}
			if (i != n - 1)
			{
				printf("%s", separator);
			}
		}
		printf("\n");
		va_end(args);
	}
}
