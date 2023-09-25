#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory
 * area dest
 *
 * @dest: pointer
 * @src: pointer
 * @n: integer detrmones number of m trancations
 *
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r;
	int k = n;

	for (r = 0; r < k; r++)
	{
		dest[r] = src[r];
	}
	return (dest);
}
