#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - function that concatenates two strings
 *
 * @s1: strin that concatenate to
 * @s2: string that concatenate from
 * @n: number of bytes from s2 that will be concatenated to s1
 *
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j;
	unsigned int s1_length = 0, s2_length = 0;

	i = 0;
	while (s1[i] != '\0')
		s1_length++;

	j = 0;
	while (s2[j] != '\0')
		s2_length++;

	if (n >= s2_length)
		s = malloc(sizeof(char) * (s1_length + s2_length + 1));
	else
		s = malloc(sizeof(char) * (s1_length + n + 1));

	if (s == NULL)
		return (NULL);

	i = 0;
	while (i < s1_length)
	{
		s[i] = s1[i];
		i++;
	}

	j = 0;
	while (n < s2_length && i < (s1_length + n))
		s[i++] = s2[j++];

	while (n >= s2_length && i < (s1_length + s2_length))
		s[i++] = s2[j++];

	s[i] = '\0';
	return (s);
}
