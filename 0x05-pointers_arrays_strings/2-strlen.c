#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: input string
 *
 * Return: length of inpuat string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
