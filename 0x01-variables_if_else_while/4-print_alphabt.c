#include <stdio.h>

int main/** main - enter program
	  * program to print lowercase alphabet except q and e
	  * return : 0 always success
	  */(void)
{
	int i = 97;

	while (i < 123)
	{
		if (i == 101)
		{
			continue;
		}
		if (i == 113)
		{
			continue;
		}
	putchar(i);
	i++;
	}
	putchar('\n');
	return (0);
}
