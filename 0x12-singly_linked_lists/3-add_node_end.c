#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, temp;
	unsigned int count = 0;
	unsigned int k = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (k = 0; str[k] != '\0'; k++)
		count++;
	new->len = count;
	new->next = NULL;

	temp = *head;
	if (temp == NULL)
	{
		*head = new;
		return (*head);
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
		return (new);
	}
