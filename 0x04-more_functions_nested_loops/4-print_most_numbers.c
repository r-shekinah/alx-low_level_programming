#include "main.h"

void print_most_numbers/**
			* print_most_numbers - print numbers from 0 to 9 except 2 and 4
			*/(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 50 || i == 52)
			break;
		_putchar(i);
	}
	_putchar('\n');
}
