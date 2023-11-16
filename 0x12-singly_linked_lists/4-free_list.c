#include "lists.h"

/**
 * free_list - it frees all linked list
 * @head: the head node
 */

void free_list(list_t *head)
{
	list_t *hold;

	while (head)
	{
		hold = head->next;
		free(head->str);
		free(head);
		head = hold;
	}
}
