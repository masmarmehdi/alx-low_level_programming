#include "main.h"
/**
 * rot13 - char pointer
 * @s: string
 * Description: encodes a string using rot13
 * Return: string
 */
char *rot13(char *s)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = rot[j];
				break;
			}
		}
	}
	return (s);
}
