#include "3-calc.h"

/**
 * main - check the code
 * @argc: int
 * @argv: array of str
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*func)(int, int);
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = argv[2];
	func = get_op_func(operator);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	printf("%d\n", func(num1, num2));
	return (0);
}
