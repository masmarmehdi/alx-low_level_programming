#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - file
 * @n: input number
 * Description: 98 Battery Street, the OG
 * Return: nothing (void)
 */
void print_to_98(int n)
{
	while (1)
	{
		printf("%d", n);
		if (n > 98)
		{
			n--;
		}
		else if (n == 98)
		{
			break;
		}
		else
		{
			n++;
		}
		printf("%c", ',');
		printf("%c", ' ');
	}
	printf("\n");
}
