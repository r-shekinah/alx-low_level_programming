#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - copies string to new memory space
 * @str: string to be copied
 * Return: pointer to new mem space, NULL for empty string or insufficient mem
 */
char *_strdup(char *str)
{
	int i;
	int j = strlen(str);
	char *dup;

	/*dup = malloc(j * sizeof(char));*/
	if (str == NULL)
		return (NULL);

	dup = malloc(j * sizeof(char));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= j; i++)
		dup[i] = str[i];
	return (dup);
}
