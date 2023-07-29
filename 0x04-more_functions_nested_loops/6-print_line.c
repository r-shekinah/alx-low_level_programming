#include "main.h"

void print_line/**
		* print_line - prints line of length n when n is positive
		*/(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
	}
	else
		_putchar('\n');
}
