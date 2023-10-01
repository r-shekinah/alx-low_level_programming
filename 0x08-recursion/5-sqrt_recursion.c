#include "main.h"
/**
 * helperFunction - aids in the evaluation of natural square root of n
 * @n: number whose square root is to be evaluated
 * @guess: value of possible root
 * Return: -1 if root is not natural, otherwise root
 */
int helperFunction(int n, int guess)
{
	if ((guess * guess) > n)
		return (-1);
	else if ((guess * guess) == n)
		return (guess);
	else
		return (helperFunction(n, guess + 1));
}
/**
 * _sqrt_recursion - evaluates natural square root of n
 * @n: number whose square root is to be evaluated
 * Return: -1 if input or root invalid, otherwise value of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	int guess = 0;

	return (helperFunction(n, guess));
}
