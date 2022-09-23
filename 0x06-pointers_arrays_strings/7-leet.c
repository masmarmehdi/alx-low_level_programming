#include "main.h"
/**
 * leet - string function
 * @s: string
 * Description: encode string into 1337
 * Return: string
 */
char *leet(char *s)
{
	int i, j;
	char letters[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char encodes[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = encodes[j];
			}
		}
	}
	return (s);
}
