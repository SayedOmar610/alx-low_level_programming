#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers
 *
 * @width: number of colums
 * @height: number of rows
 *
 * Return: a pointer to 2 dim. array or NULL on failure
 * or If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(*p) * height);
	if (p == NULL)
		return (NULL);

	for (i = 0; i <= height; i++)
	{
		p[i] = malloc(sizeof(**p) * width);
		if (p[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(p[i]);
			}
			free(p);
			return (NULL);
		}
	}

	for (i = 0; i <= height; i++)
	{
		for (j = 0; j <= width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
