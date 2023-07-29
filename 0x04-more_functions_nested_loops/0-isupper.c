#include "main.h"

int _isupper/**
 * _isupper - checks for uppercase letter
 * Return - 1 if uppercase
 * Return - 0 if not uppercase
 * @c - input
 */(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
