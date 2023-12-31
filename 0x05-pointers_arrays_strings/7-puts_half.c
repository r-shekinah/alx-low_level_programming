#include "main.h"

void puts_half/**
		* puts_half - prints half of a string, followed by a new line
		* @str - string to be printed
		*/(char *str)
{
	int n = 0;
	int m;

	if (*str == '\0')
		_putchar('\n');
	else
	{
		while (*str != '\0')
		{
			str++;
			n++;
			if (n % 2 == 0)
				m = n / 2;
			else
				m = (n + 1) / 2;
		}
		while (n != m)
		{
			str--;
			n--;
		}
		while (*str != '\0')
		{
			_putchar(*str);
			str++;
		}
		_putchar('\n');
	}
}
