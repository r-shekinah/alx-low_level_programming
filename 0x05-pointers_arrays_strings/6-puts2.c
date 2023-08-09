#include "main.h"

void puts2/**
	    * puts2 - prints every other character of a string
	    * @str - string to be printed
	    */(char *str)
{
	int i = 1;

	if (i % 2 == 1 && *str != '\0')
	{
		_putchar(*str);
		str++;
		i++;
	}
}
