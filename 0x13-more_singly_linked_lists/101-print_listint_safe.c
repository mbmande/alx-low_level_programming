#include "lists.h"

/**
 * print_listint_safe - it prints the linked list
 * @head: only parameter
 * Return: count
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *crnt = head;

	size_t count = 0;

	while (crnt != NULL)
	{
		printf("[%p]%d\n", (void *)crnt, crnt->n);
		count++;

		if (crnt >= crnt->next)
		{
			printf("->[%p]%d\n", (void *)crnt, crnt->next->n);
			break;
		}
		crnt = crnt->next;
	}

	return (count);
}
