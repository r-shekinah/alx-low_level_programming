#include "main.h"
/**
 * is_prime_recursion - evaluates if a number is or is not a prime
 * Return: 1 if prime, else 0
 * @n: number to be evaluated
 * @i: half of n
 */
int is_prime_recursion(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_recursion(n, (i - 1)));
}
/**
 * is_prime_number - wrapper function to intialize recursion
 * Return: 1 if prime, else 0
 * @n: number to be evaluated
 */
int is_prime_number(int n)
{
	return (is_prime_recursion(n, (n / 2)));
}
