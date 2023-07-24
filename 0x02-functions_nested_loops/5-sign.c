#include "main.h"

int print_sign/** prints sign of number if not zero, otherwise prints 0
		* returns 1 for positives, -1 for negatives and 0 for 0
		*/ (int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar(0);
		return (0);
	}
}
