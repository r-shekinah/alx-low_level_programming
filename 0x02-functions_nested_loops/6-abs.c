#include "main.h"

int _abs/* prints the absolute value of number
	 * return : always 0
	 */(int i)
{

	if (i < 0)
	{
		i = (i * -1);
		_putchar('i');
	}
	if (i > 0)
	{
		_putchar('i');
	}
	else
	{
		_putchar('0');
	}
	return (0);
}
