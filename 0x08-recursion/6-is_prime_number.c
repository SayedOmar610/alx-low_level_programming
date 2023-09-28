#include "main.h"

int test_prime(int n, int k);
/**
 * is_prime_number - tells if anumber is integer or not
 *
 * @n: number to be checked
 *
 * Return: 1 if prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (test_prime(n, n - 1));
}

/**
 * test_prime - returns 1 if a number is integer
 *
 * @n: number to be checked
 *
 * @k: input to check with
 *
 * Return: 1 if prime number
 */
int test_prime(int n, int k)
{
	if (k == 1)
		return (1);
	if (n % k == 0 && k > 0)
		return (0);
	return (test_prime(n, k - 1));
}
