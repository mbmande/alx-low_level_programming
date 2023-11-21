#include "lists.h"

/**
 * pop_listint - it deletes the first node in the list
 * @head: header pointer
 * Return: 0
 */

int pop_listint(listint_t **head)
{
	int o;
	listint_t *por;

	if (head == NULL || *head == NULL)
		return (0);
	o = (*head)->n;
	por = *head;
	*head = (*head)->next;
	free(por);
	return (o);
}
