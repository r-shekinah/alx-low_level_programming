#include "dog.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * Return: pointer to new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = (char *)malloc(strlen(name) + 1);
	dog->owner = (char *)malloc(strlen(owner) + 1);

	if (dog->name == NULL || dog->owner == NULL)
		free(dog);

	strcpy(dog->name, name);
	strcpy(dog->owner, owner);

	dog->age = age;

	return (dog);
}
