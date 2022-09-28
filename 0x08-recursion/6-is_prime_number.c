#include "main.h"
/**
 * prime_number - int function
 * @i: int
 * @n: int
 * Description: check if number is prime
 * Return: 1 or 0.
 */
int prime_number(int i, int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (i == n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (prime_number(i + 1, n));
}
/**
 * is_prime_number - int function
 * @n: int
 * Description: check if number is prime
 * Return: 1 or 0.
 */
int is_prime_number(int n)
{
	return (prime_number(2, n));
}
