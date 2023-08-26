#include "main.h"
char *_strncat/**
		* *_strncat - concatenates two strings using n bytes from source string
		* dest - destination string
		* src - source string
		* n - specifies number of bytes used from src
		* return : pointer to resulting string dest
		*/(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		if (n == j)
			break;
		dest[i] = src[j];
		j++;
		i++;
	}
	if (j > n)
		src[i] = '\0';

	return (dest);
}

