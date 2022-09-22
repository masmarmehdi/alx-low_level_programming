#include "main.h"
/**
 * string_toupper - char pointer function
 * @s: string
 * Description: string to uppercase
 * Return: str
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
	}
	return (s);
}
