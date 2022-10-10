#include "dog.h"

/**
 * init_dog - void function
 * @d: struct dog
 * @name: str
 * @age: float
 * @owner: str
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
