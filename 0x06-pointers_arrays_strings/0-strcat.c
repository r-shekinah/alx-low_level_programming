#include "main.h"
char *_strcat/**
	       * *_strcat - concatenates two strings
	       * returns pointer to resulting string
	       * *dest, *src - strings to be concatenated
	       */(char *dest, char *src)
{
	/*int i = 0, j = 0;*/
	int i;

	while (*dest != '\0')
	{
		dest++;
		i++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	while (i != 0)
	{
		dest--;
		i--;
	}

	return (dest);
}
