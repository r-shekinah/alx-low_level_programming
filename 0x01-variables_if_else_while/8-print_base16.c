#include <stdio.h>
int main/** main - entry point
	  * program that prints numbers base sixteen
	  * return : 0 always success
	  */(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}

	i = 97;

	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
