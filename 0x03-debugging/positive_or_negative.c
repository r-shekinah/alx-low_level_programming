#include "main.h"

void positive_or_negative/**
			  * prints whether number is positive, negative or zero
			  */(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
}
