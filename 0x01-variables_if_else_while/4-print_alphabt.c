#include <stdio.h>

int main/** main - enter program
	  * program to print lowercase alphabet except q and e
	  * return : 0 always success
	  */(void)
{
	int i;

	for (i = 97; i < 123; i++)
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
	}
	putchar('\n');
	return (0);
}
