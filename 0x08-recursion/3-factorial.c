#include "main.h"

/**
 * factorial - returns the factorial of a number
 * Return: factorial of given number
 * @n: number whose factorial is returned
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
