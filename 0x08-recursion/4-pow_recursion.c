#include "main.h"
int _pow_recursion/**
		    * _pow_recursion - evaluates the value of x raised to power y
		    * @x, @y: input
		    * return: result of evaluation
		    */(int x, int y)
{
	int i, res;

	res = y - 2;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	i = x * x;
	res = i * x;
	_pow_recursion(res / i, y - 1);

	return (res);
}
