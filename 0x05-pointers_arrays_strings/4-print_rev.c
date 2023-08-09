#include "main.h"

void print_rev/**
		* print_rev - prints a string, in reverse, followed by a new line
		* @s - string to be printed
		*/(char *s)
{
	while (*s != '\0')
		*s++;

	_putchar(*s);
	*s--;
}
