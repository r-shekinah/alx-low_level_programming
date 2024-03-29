#include "main.h"
/**
 * is_palindrome_recursive - checks if string is a palindrome
 * Return: 1 if palindrome, else 0
 * @s: string to be evaluated
 * @start: index counter from start of string
 * @end: index counter from end of string
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_palindrome_recursive(s, (start + 1), (end - 1)));
}
/**
 * is_palindrome - wrapper function that initializes recursion
 * Return: 1 if palindrome, else 0
 * @s: string to be evaluated
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	return (is_palindrome_recursive(s, 0, (length - 1)));
}
