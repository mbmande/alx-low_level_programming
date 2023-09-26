#include "lists.h"

/**
 * get_nodeint_at_index - it finds index
 * @head: first parameter
 * @index: what to find
 * Return: fnode
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *fnode = head;

	unsigned int count = 0;

	while (fnode != NULL)
	{
		if (count == index)
		{
			return (fnode);
		}
		fnode = fnode->next;
		count++;
	}
	return (NULL);
}
