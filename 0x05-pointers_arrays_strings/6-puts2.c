#include "main.h"

void puts2/**
	    * puts2 - prints every other character of a string
	    * @str - string to be printed
	    */(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		i++;

		if (*str % 2 == 1)
		{
			_putchar(*str);
			str++;
			i++;
		}
	}
}
