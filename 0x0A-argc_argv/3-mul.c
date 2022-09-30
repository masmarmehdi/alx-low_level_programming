#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: int
 * @argv: array of str
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int mul;

	(void)argc;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
