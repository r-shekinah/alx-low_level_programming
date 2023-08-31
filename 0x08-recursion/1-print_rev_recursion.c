#include "main.h"
void _print_rev_recursion/**
			   * _print_rev_recursion - prints a string in reverse
			   * @s : input
			   */(char *s)
{
	if (*s != '\0')
		s++;
	_putchar(*s);
	_print_rev_recursion(s - 1);
}
