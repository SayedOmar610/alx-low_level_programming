#include "lists.h"

/**
 * add_nodeint_end - function that add node at the
 * end of  list
 *
 * @head: pointer that refere to the first node of a list
 * @n: parameter that have the added node
 *
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *other_nodes = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
	*head = new;
	return (new);
	}
	while (other_nodes->next)
		other_nodes = other_nodes->next;

	other_nodes->next = new;
	return (new);
}
