#include "lists.h"

/**
 * sum_dlistint - it sums everything in the list
 * @head: the head
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{

	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
