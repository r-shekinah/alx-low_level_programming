#include "main.h"
void _puts_recursion/**
		     * _puts_recursion - prints a string
		     * @s - input
		     */(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
