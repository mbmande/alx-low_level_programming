#include "lists.h"

/**
 * free_listint - it frees the list
 * @head: it points to the head
 */

void free_listint(listint_t *head)
{
	listint_t *por;

	while ((por = head) != NULL)
	{
		head = head->next;
		free(por);
	}
}
