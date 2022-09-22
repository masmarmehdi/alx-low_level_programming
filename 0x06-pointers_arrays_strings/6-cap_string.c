#include "main.h"
/**
 * cap_string - char pointer function
 * @s: string
 * Description: capitalize all words of a string
 * Return: char pointer
 */
char *cap_string(char *s)
{
	int i, j;
	char special_characters[] = {' ', ';', '.', '!', '?', '\n', '(', ')', '{', '}', ',', '\t', '"'};
	for (i = 0; s[i] != '\0'; i++)
	{
		/*
		if (i == 0 && (s[i] >= 97 && s[i] <= 122))
		{
			s[i] -= 32;
		}*/
		for (j = 0; j < 13; j++)
		{
			if (s[i] == special_characters[j])
			{
				if(s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
			}
		}
	}
	return (s);
}
