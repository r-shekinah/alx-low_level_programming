#include "main.h"

int print_last_digit/* prints last digit of a number
		     * return : 0 success
		     */(int i)
{
	int l;

	l = i % 10;

	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else if (l > 0)
	{
		_putchar(l + 48);
		return (l);
	}
	else
	{
		_putchar(0 + 48);
		return (0);
	}
}
