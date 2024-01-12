#include "lists.h"

/**
 * get_dnodeint_at_index - find node in the list
 * @head: the head
 * @index: node
 * Return: head
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (index = 0; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
