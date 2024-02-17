#include "dog.h"
#include <stddef.h>
/**
 * init_dog - initializes variable of type struct dog
 * @d: name of struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: none
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
