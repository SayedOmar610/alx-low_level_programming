#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - function that returns a pointer to a newly
 *  allocated space in memory,which contains a copy of the string
 *  given as a parameter
 *
 *  @str: pointer to new located space in memory
 *
 *  Return: pointer to the duplicated string
 *  or null if insufficient space
 */
char *_strdup(char *str)
{
	char *p;
	int i, j;
	int size;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0', i++)
	;

	size = i + 1;
	p = malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		p[j] = str[j];

	return (p);
}
