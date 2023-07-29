#include "main.h"

void more_numbers/**
		  * more_numbers - prints numbers 0 to 14 ten times
		  */(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar(49);
			_putchar(i % 10 + 48);
		}
		_putchar('\n');
	}
}
