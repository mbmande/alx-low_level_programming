#include "lists.h"

/**
 * listint_len - it returns the number of elememnt in the list
 * @h: it points to the head
 * Return: cunt
 */

size_t listint_len(const listint_t *h)
{
	unsigned int cunt;

	if (h == NULL)
		return (0);

	for (cunt = 0; h != NULL; cunt++)
		h = h->next;
	return (cunt);
}
