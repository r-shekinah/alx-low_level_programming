#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse using recursion
 * @s: string to be printed in reverse
 */
void _print_rev_recursion(char *s)
{
	/* calls the funtion again with next index until null byte */
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	/* prints character in current index */
	_putchar(*s);
}
