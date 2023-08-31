#include "main.h"
int factorial/**
	       * factorial - returns the factorial of a given number
	       * @n : input
	       * return : factorial of n
	       */(int n)
{
	int res;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	res = n * factorial(n - 1);

	return (res);
}
