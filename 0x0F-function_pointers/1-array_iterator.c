#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints each array elem with action function
 *
 * @array: array
 * @size: how many elem to print
 * @action: function pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL && action != NULL)
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
