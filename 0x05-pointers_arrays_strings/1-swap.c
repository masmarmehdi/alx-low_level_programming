#include "main.h"
/**
 * swap_int - void function
 * @a : int pointer
 * @b : int pointer
 * Description: Don't swap horses in crossing a stream
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
