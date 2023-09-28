#include "main.h"

/**
 * _strlen_recursion -  returns the length of a string.
 *
 * @s: input string
 *
 * return: string length
 */
int _strlen_recursion(char *s)
{
	int s_count = 0;

	if (*s > '\0')
	{
		s_count = s_count + 1;
		s_count = _strlen_recursion(s + 1) + 1;
	}
	return (s_count);
}
