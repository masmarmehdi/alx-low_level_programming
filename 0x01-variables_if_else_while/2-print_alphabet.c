#include <stdio.h>
#include <ctype.h>
/**
 * main - main file
 * I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
 * Return: 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		int lower_char = tolower(ch);
		putchar(lower_char);
	}
	putchar('\n');
	return (0);
}
