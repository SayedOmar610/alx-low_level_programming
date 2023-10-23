#include "lists.h"

/**
 * add_nodeint - functiom to add node at the begging of list
 *
 * @head: parametr that have first address of node
 * @n: list
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
