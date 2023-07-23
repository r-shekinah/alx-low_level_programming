#include <stdio.h>
int main/** main - entry point
	  * program that prints single digit numbers of base ten
	  * return : 0 always success
	  */(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
