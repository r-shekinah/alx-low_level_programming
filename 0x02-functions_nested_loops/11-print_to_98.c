#include "main.h"
#include <stdio.h>

void print_to_98/*prints natural numbers from n to 98
		 */(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
		}
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
		}
	}
}
