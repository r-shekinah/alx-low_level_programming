#include <stdio.h>
int main/** main - entry point
	  * program that prints alphabet in reverse
	  * return : 0 always success
	  */(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
