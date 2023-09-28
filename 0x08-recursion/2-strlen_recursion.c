#include "main.h"
/**
 * _strlen_recursion - evaluates length of string
 * @s: string whose length is to be evaluated
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	/* returns 0 at null byte */
	if (*s == '\0')
	{
		return (0);
	}
	/**
	 * calls function recursively
	 * each call returns 1 more than previous call to next call
	 */
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
