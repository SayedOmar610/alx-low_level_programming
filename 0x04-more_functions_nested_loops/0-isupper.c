#include "main.h"

/**
 * _isupper - checks for uppercase character.
 *
 * @c: returned character from function
 *
 * Return: 1 for upper case, 0 elsewise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
