#include "main.h"

/**
 * void more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 11; i++)
	{
		for (j = 0; j < 15; j++)
		{
			k = j;
			if (j > 9)
			{
				_putchar (1 + 48);
				k = j % 10;
			}
			_putchar (k + 48);
		}
		_putchar ('\n');
	}
}
