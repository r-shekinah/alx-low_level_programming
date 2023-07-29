#include "main.h"

void times_table/* prints the 9 times table
		 */(void)
{
	int a = 0, b = 0;

	while (b <= 9)
	{
		while (a <= 9)
		{
			int product = a * b;

			if (product != 0)
			{
				_putchar(',');
				if (product < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
				}
			}
			if (product < 10)
			{
				_putchar(product + 48);
			}
			else
			{
				_putchar(product / 10 + 48);
				_putchar(product % 10 + 48);
			}
			if (a == 9)
			{
				_putchar('\n');
			}
			a++;
		}
		a = 0;
		b++;
	}
}
