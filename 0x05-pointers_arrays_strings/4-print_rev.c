#include "main.h"

void print_rev/**
		* print_rev - prints a string, in reverse, followed by a new line
		* @s - string to be printed
		*/(char *s)
{
	int i = 0;
	
	int j;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;

	for (j = i; j > 0; j--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
