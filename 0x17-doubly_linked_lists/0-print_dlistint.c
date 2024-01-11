#include "lists.h"

/**
 * print_dlistint - it prints everything
 * @h: the head
 * Return: node
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nd = 0;

	while (h)
	{
		nd++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nd);
}
