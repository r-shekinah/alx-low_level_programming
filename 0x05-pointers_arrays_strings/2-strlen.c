#include "main.h"
int _strlen/**
	    * _strlen - returns the length of a string
	    */(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		s++;
		a++;
	}

	return (a);
}
