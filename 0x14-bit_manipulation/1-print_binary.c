#include "main .h"

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int b, x;

	x = 0;
	b = sizeof(n) * 8;

	while (b != NULL)
	{
		if (n & 1L << --b)
		{
			_putchar('1');
			x++;
		}
		else if (x)
			_putchar('0');
	}
	if (x == NULL)
		_putchar('0');
}
