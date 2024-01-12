#include "lists.h"


/**
 * free_dlistint - it frees the list
 * @head: the head
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ttt;

	while (head)
	{
		ttt = head->next;
		free(head);
		head = ttt;
	}
}
