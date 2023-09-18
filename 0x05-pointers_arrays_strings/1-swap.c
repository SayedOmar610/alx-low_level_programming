#include "main.h"

/**
 * swap_int -  a function that swaps the values of two integers
 *
 * @a: integer input 1
 * @b: integer input 2
 *
 * return swapped values of a and b
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
