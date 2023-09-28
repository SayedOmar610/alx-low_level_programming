#include "main.h"

int _sqrt_recursion_function(int n, int i);
/**
 *  _sqrt_recursion -  returns the natural square root of a number
 *
 * @n: number to be obtained to square root
 *
 * Return: squareroot
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt_recursion_function(n, 0));
}
/**
 * _sqrt_recursion_function - returns the natural square root of a number
 *
 * @n: number to be obtained to square root
 * @i: number to be repeated
 *
 * Return: squareroot
 */
int _sqrt_recursion_function(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (_sqrt_recursion_function(n, i + 1));
	else
		return (-1);
}
