#include <stdio.h>
int main/** main - entry point
	   * program to print alphabet in lowercase and uppercase
	   * return : 0 always success
	   */(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}

	i = 65;

	while (i < 91)
	{
		putchar(i);
		i++;
	}

	putchar('\n');
	return (0);
}
