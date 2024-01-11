#include "lists.h"

/**
 * dlistint_len - it counts the number of it
 * @h: the head
 *
 *
 * Return: node
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nd = 0;

	while (h)
	{
		nd++;
		h = h->next;
	}
	return (nd);
}
