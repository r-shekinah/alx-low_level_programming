#include <stdio.h>
int main/** main - entry point
	  * program that prints cominatioons of two numbers in asc order
	  * return : 0 always success
	  */(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
