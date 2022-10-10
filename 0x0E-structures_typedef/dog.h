#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - objects of a dog
 * @name: str
 * @age: float
 * @owner: str
 * Description: objects of a dawg
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
