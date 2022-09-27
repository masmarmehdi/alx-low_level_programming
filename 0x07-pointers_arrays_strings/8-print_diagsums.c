#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - void function
 * @a: int pointer
 * @size: int
 * Description: prints the sum of the two diagonals of a square matrix
 * Return: nothing.
 */
void print_diagsums(int *a, int size)
{
	int i, sum_diagonal1 = 0, sum_diagonal2 = 0;

	for (i = 0; i < size; i++)
	{
		sum_diagonal1 += a[i];
		a += size;
	}
	for (i = 0; i < size; i++)
	{
		a -= size;
		sum_diagonal2 += a[i];
	}
	printf("%d, %d\n", sum_diagonal1, sum_diagonal2);
}
