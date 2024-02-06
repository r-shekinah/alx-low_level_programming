#include "main.h"
/**
 * _sqrt_recursive - checks for natural square root of n
 * Return: square root if natural, else -1
 * @n: radicand
 * @guess: guess for square root
 */
int _sqrt_recursive(int n, int guess)
{
	if ((guess * guess) == n)
		return (guess);
	if ((guess * guess) > n)
		return (-1);
	else
		return (_sqrt_recursive(n, (guess + 1)));
}
/**
 * _sqrt_recursion - wrapper function to initiate recursive function
 * Return: square root if natural, else -1
 * @int: radicand
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt_recursive(n, 0));
}
