#include "main.h"
/**
 * wildcmp - checks if two strings are identical, with respect to wildcard '*'
 * Return: 1 if considered identical, else 0
 * @s1: first string
 * @s2: second string which can contain '*'
 */
int wildcmp(char *s1, char *s2)
{
	if ((*s1 == '\0') && (*s2 == '\0'))
		return (1);
	if ((*s2 == '*') || (*s1 == *s2))
	{
		 if ((*s2 == '*') && (*(s2 + 1) != '\0') && (*s1 == '\0'))
			 return (wildcmp(s1, (s2 + 1)) || wildcmp((s1 + 1), s2));
		 else if ((*s1 != '\0') && (*s2 != '\0'))
			 return (wildcmp((s1 + 1), (s2 + 1)));
	}
	if (*s1 != *s2)
		return (0);
	return (0);
}
