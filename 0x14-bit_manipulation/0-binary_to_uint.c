#include "main.h"

/**
 * binary_to_uint - function converts a binary number to an unsigned int.
 *
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum;
	int i;

	sum = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		sum = sum * 2;
		if (b[i] == '1')
			sum = sum + 1;
	}
	return (sum);
}

