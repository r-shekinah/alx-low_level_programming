#include "main.h"

void print_line/**
		* print_line - prints line of length n when n is positive
		*/(int n)
{
	int i = 1;

	if (n > 0)
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
