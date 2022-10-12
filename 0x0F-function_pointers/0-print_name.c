#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - void function
 * @name: str
 * @f: void function
 *
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
