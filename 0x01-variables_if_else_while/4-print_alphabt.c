#include <stdio.h>

int main/** main - enter program
	  * program to print lowercase alphabet except q and e
	  * return : 0 always success
	  */(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
			if (i == 101)
			{
			continue;
			}
			if (i == 113)
			{
			continue;
			}
	}
	putchar('\n');
	return (0);
}
