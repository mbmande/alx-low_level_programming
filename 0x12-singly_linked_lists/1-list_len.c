#include "lists.h"

/**
 * list_len - it looks for the lenght
 * @h: parameter
 * Return: node
 */

size_t list_len(const list_t *h)
{
	size_t node;

	node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
