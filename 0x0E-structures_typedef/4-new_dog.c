#include "dog.h"
#include <stdlib.h>
/**
 * str_cpy - str function
 * @dest: str
 * @src: str
 *
 * Return: pointer to dest
 */
char *str_cpy(char *dest, char *src)
{
	int i;

	for (i= 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * str_len - int funciton
 * @str: str
 *
 * Return: len
 */
int str_len(char *str)
{
	int len, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
/**
 * new_dog - struct pointer function
 * @name: str
 * @age: float
 * @owner: str
 *
 * Return: struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dawg;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}
	dawg = malloc(sizeof(dog_t));
	if (dawg == NULL)
	{
		return (NULL);
	}
	dawg->name = malloc(sizeof(char) * (str_len(name) + 1));
	if(dawg->name == NULL)
	{
		free(dawg);
		return (NULL);
	}
	dawg->owner = malloc(sizeof(char) * (str_len(owner) + 1));
	if (dawg->owner == NULL)
	{
		free(dawg->name);
		free(dawg);
		return (NULL);
	}
	dawg->name = str_cpy(dawg->name, name);
	dawg->age = age;
	dawg->owner = str_cpy(dawg->owner, owner);

	return (dawg);
}
