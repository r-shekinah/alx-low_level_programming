#include "main.h"

void jack_bauer/* prints each minute across 24 hours
		*/(void)
{
	int i, j, k, l;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					if (i == 2 && j == 5)
					{
						break;
					}
					_putchar(l + 48);
				}
				_putchar(k + 48);
			}
			_putchar(j + 48);
			_putchar(':');
		}
		_putchar(i + 48);
	}
}
