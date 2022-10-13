#include "variadic_functions.h"

/**
 * print_all - void function
 * @format: array
 *
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *temp;

	va_start(args, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(args, double));
				break;
			case 's':
				temp = va_arg(args, char *);
				if (temp == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", temp);
				break;
		}
		if (format[i + 1] != '\0')
		{
			printf(", ");
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
