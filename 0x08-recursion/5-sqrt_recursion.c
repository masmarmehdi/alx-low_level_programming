#include "main.h"
/**
 * square_root - int function
 * @i: int
 * @n: int
 * Description: iterate with i to n to find square root
 * Return: int
 */
int square_root(int i, int n)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (square_root(i + 1, n));
}
/**
 * _sqrt_recursion - int function
 * @n: int
 * Description: returns the natural square of root of a number
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (square_root(1, n));
}
