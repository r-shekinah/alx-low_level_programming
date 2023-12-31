#include "main.h"
char *_strcat/**
	       * *_strcat - concatenates two strings
	       * returns pointer to resulting string
	       * *dest, *src - strings to be concatenated
	       */(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	src[j] = '\0';

	return (dest);
}
