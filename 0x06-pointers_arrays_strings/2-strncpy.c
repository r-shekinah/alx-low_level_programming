#include "main.h"
char *_strncpy/**
		* *_strncpy - copies source string to destination string
		* dest - destination string
		* src - source string
		* n - number of bytes written
		*/(char *dest, char *src, int n)
{
	/*counting total bytes*/
	int i = 0, j = 0, x;
	int k = 0;

	while (dest[i] != '\0')
		i++;
	
	while (src[j] != '\0')
		j++;

	/*setting conditions for execution*/
	if (j >= i)
	{
		while (k < n)
		{
			dest[k] = src[k];
			k++;
		}
		if (j < n)
		{
			x = n - k;
			while (k <= x)
			{
				dest[k] = '\0';
				k++;
			}
		}
	}
	return (dest);
}
