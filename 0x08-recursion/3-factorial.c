#include "main.h"
/**
 * factorial - evaluates the factorial of a given number
 * @n: number whose factorial is evaluated
 * Return: factorial of number if n >= 0, else -1 (error)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	/**
	 * calls function with one value less than before each time
	 * multiples result of each call by each n at base case
	 */
	else
	{
		return (n * factorial(n - 1));
	}
}
