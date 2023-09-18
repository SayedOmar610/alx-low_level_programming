#include "main.h"

/**
 * print_rev - imprime en reversa
 *
 * @s: string
 *
 * return: 0
 */
void print_rev(char *s)
{
	int count  = 0;
	int rvs;

	while (*s != '\0')
	{
		count++;
		S++;
	}
	for (rvs = count; rvs > 0; rvs--)
	{
		_putchar(*s);
		S--;
	}
	_putchar('\n');
}
