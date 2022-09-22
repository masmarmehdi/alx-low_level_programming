#include "main.h"
#include <stdio.h>
/**
 * reverse_array - void function
 * @a: array of int
 * @n: number of elements
 * Description: reversing an array
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2 ; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
