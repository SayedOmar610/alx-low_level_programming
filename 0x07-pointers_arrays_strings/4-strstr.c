#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of byteschar
 *
 * @s: pointer to string
 * @accept: string to be compared
 *
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; accept[j]; j++)
	{
		if (s[i] == accept[j])
			return (&s[i]);
	}
		i++;
	}
	return (0);
}
