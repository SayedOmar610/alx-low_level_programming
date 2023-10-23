#include "lists.h"
#include <stdio.h>

/**
 * listint_len - a function that rerutn the lenght of linked list
 *
 * @h: linked list
 *
 * Return: number of linked list nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
