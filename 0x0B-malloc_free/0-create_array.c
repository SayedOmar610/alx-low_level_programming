#include "main.h"

/**
 * *create_array -  function that creates an array of chars,
 *  and initializes it with a specific char
 *
 *  @size: input integer to determine the size of the array
 *  @c: input character to intialize the array
 *
 *  Return: NULL if size = 0 or  pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(char) * size);
	if (size == 0 || p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
