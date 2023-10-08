#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 *
 * @b: size of allocated memory
 *
 * Return: pointer  to located memory
 */
void *malloc_checked(unsigned int b)
{
	void *k;

	k = malloc(b);
	if (k == NULL)
	{
		exit(98);
	}
	return (k);
}
