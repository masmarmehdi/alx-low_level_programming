#include "main.h"
/**
 * 1-alphabet - void function
 * I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
 * Return: 0 (Success).
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
