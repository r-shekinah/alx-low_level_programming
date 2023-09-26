#ifndef DOG_H
#define DOG_H
/**
 * struct dog - information about dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif
