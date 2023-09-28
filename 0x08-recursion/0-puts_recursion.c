#include "main.h"
/**
 * _puts_recursion - uses recursion to print a string and new line
 * @s: string to be printed
 */
void _puts_recursion(char *s)
{
	/**
	 * checks if the end of string has been reached
	 *if so, new line printed and function returns
	 */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	/**
	 * prints the character at given index of string
	 * increases index and function recurses
	 */
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
