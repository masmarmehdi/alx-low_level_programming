#include <stdio.h>
#include <stdlib.h>

int number_of_coins(int cents);
/**
 * main - check the code
 * @argc: int
 * @argv: array of str
 * Return: either 0 or 1.
 */
int main(int argc, char *argv[])
{
	int result, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	result = number_of_coins(cents);
	printf("%d\n", result);
	return (0);
}
/**
 * number_of_coins - int function
 * @cents: int
 * Return: int
 */
int number_of_coins(int cents)
{
	int coins = 0;

	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		if ((cents - 1) >= 0)
		{
			cents -= 1;
			continue;
		}
	}
	return (coins);
}
