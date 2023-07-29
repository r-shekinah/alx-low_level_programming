#include "main.h"

int _isdigit/**
 * _isdigit - checks for digit
 * return - 1 if digit, 0 if otherwise
 * @c - input
 */(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
