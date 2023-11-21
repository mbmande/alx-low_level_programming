#include "lists.h"

/**
 * print_listint - it prints int in the list
 * @h: it points to the head in the list
 * Return: cunt
 */

size_t print_listint(const listint_t *h)
{
	unsigned int cunt;

	if (h == NULL)
		return (0);

	for (cunt = 0; h != NULL; cunt++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (cunt);
}
