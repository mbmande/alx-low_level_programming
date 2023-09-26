#include "lists.h"

/**
 * sum_listint - it sums all the node
 * @head: parameter
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int added = 0;

	listint_t *cphead = head;

	while (cphead != NULL)
	{
		added = added + cphead->n;
		cphead = cphead->next;
	}
	return (added);
}
