#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 *
 * @h: paramter
 *
 * Return: elements of list_t
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (!h->str)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
