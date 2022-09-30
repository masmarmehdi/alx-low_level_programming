#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * is_number - int function
 * @number: array of char
 * Return: -1 or 0.
 */
int is_number(char number[])
{
	int i = 0;

	if (number[0] == '-')
	{
		i = 1;
	}
	while (number[i] != 0)
	{
		if (!isdigit(number[i]))
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
/**
 * main - check the code
 * @argc: int
 * @argv: array of str
 * Return: Either 0 or 1.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (is_number(argv[i]) == 0)
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
