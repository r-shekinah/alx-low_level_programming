#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initializes it
 * @size: size of the array
 * @c: character used in intialization
 * Return: pointer to the array, NULL if fails or size 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
		return (NULL);
	ar = malloc(size * sizeof(c));
	for (i = 0; i <= size; i++)
		ar[i] = c;
	if (ar == NULL)
		return (NULL);
	else
		return (ar);
	free(ar);
}
