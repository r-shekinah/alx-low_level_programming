#include <stdio.h>
int main/* main - entry point
	 * program that prints numbers base ten
	 * return : 0 always success
	 */(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	putchar("\n");

	return (0);
}
