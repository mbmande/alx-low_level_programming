#include "lists.h"

/**
 * print_listint - it prints the number of elements
 * @h: what to be printed
 * Return: nums
 */

size_t print_listint(const listint_t *h)
{
	size_t nums;

	nums = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nums++;
	}
	return (nums);
}
