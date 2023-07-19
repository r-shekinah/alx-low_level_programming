#include <stdio.h>

int main/** main - entry point
	  * Return : 0 always success
	  */(void)
{
	char i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
