#include "lists.h"

/**
 * free_listint2 - it frees a list of nodes
 * @head: it points to the head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *por;

	if (head == NULL || *head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		por = (*head)->next;
		free(*head);
		*head = por;
	}
	free(*head);
	*head = NULL;
}
