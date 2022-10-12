#include "3-calc.h"

/**
 * op_add - int function
 * @a: int
 * @b: int
 * Description: add
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - int function
 * @a: int
 * @b: int
 * Description: substraction
 * Return: sub of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - int function
 * @a: int
 * @b: int
 * Description: multiplication
 * Return: mult of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - int function
 * @a: int
 * @b: int
 * Description: division
 * Return: div of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - int function
 * @a: int
 * @b: int
 * Description: modulo
 * Return: mod of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
