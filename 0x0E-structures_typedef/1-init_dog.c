#include "dog.h"
/**
 * init_dog - initializes variable of type struct dog
 * @d: name of variable
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog &d;

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
