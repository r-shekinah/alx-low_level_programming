#include "main.h"

void print_diagonal/**
		    * print_diagonal - draws diagonal line n times when n is positive
		    */(int n)
{
	int i = 1;

	int r = 1;

	if (n > 0)
	{
		while (i <= n)
		{
			while (i <= r && n >= r)
			{
				_putchar(' ');
				r++;
			}
			_putchar(92);
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
	}
