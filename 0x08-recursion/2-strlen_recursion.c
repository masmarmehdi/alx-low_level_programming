#include "main.h"
/**
 * _strlen_recursion - int function
 * @s: str
 * Description: length of a str using recursion
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}
