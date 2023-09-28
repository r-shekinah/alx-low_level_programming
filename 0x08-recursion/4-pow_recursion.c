#include "main.h"
/**
 * _pow_recursion - evaluates x raised to y
 * @x: base
 * @y: power
 * Return: if y > 0, x raised to y, if y == 0, 1 else -1 (error)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	/**
	 * calls function again with value of y one less than before
	 * multiplies the result of each call by n at base case
	 */
	else
		return (x * _pow_recursion(x, (y - 1)));
}
