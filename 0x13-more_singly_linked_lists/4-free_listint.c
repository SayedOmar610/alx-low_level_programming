#include "lists.h"

/**
 * free_listint - frees a linked list
 *
 * @head: listint_t list to be freed
 *
 * Return: always 0
 */
void free_listint(listint_t *head)
{
	listint_t *other_nodes;

	while (head)
	{
		other_nodes = head->next;
		free(head);
		head = other_nodes;
	}
}

