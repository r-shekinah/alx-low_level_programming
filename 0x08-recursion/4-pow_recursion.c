#include "main.h"
int _pow_recursion/**
		    * _pow_recursion - evaluates the value of x raised to power y
		    * @x, @y: input
		    * return: result of evaluation
		    */(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
