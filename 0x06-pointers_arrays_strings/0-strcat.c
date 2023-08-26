#include "main.h"
char *_strcat/**
	       * *_strcat - concatenates two strings
	       * returns pointer to resulting string
	       * *dest, *src - strings to be concatenated
	       */(char *dest, char *src)
{
	/*int i = 0, j = 0;*/
	/*int i;*/

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (dest);
}
