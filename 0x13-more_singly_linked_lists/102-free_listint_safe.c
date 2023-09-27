#include "lists.h"

/**
 * free_listint_safe - it frees listint lists
 * @h: only parameter
 * Return: count
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *crnt = *h, *next;

	size_t count = 0;

	while (crnt != NULL)
	{
		next = crnt->next;
		free(crnt);

		if (crnt >= next)
			break;
		crnt = next;
	}
	*h = NULL;
	return (count);
}
