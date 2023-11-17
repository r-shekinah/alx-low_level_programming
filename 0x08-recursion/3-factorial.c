#include "main.h"
/**
 * factorial - program that calculates factorial recursively
 * @n: number whose factorail is calculated
 *
 * Return: (-1) if error, else factorial of given number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
