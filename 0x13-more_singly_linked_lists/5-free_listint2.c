#include "lists.h"

/**
 * free_listint2 - frees a linked list
 *
 * @head: pointer to the listint_t list to be freed
 *
 * Return: 0 always
 */
void free_listint2(listint_t **head)
{
	listint_t *X;

	if (head == NULL)
		return;

	while (*head)
	{
		X = (*head)->next;
		free(*head);
		*head = X;
	}
	*head = NULL;
}
