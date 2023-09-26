#include "lists.h"

/**
 * listint_len - it returns the number of elements
 * @h: the number of elements to be returned
 * Return: size_t
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
