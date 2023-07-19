#include <stdio.h>

int main/** main - entry point
	  * return : 0 always success
	  */(void)
{
	int n = 97;

	while (n < 123)
	{
		putchar(n);
		n++;
	}

	putchar('\n');

	return (0);
}
