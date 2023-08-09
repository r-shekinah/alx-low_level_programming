#include "main.h"

void puts2/**
	    * puts2 - prints every other character of a string
	    * @str - string to be printed
	    */(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		if (i % 2 == 0)
			_putchar(*str);
		str++;
		i++;
	}
	_putchar('\n');
}
