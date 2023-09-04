#include "main.h"
int _strlen_recursion/**
		       * _strlen_recursion - returns the length of a string
		       * *s - input
		       * return : length of string
		       */(char *s)
{
	if (*s)
	{

		_strlen_recursion(s + 1);
		int i;
		i++;
	}
	return (i);
}
