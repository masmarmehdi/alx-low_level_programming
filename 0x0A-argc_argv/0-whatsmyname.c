#include <stdio.h>
/**
 * main - check the code
 * @argc: int
 * @argv: array of str
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[argc - 1]);
	}
	return (0);
}
