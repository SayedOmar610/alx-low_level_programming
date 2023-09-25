#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: pointer that is a string
 * @c: required character
 *
 * Return: first occurrence of the character c in the string
 */
char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	return (0);
}
