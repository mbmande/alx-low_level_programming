#include "lists.h"

/**
 * pop_listint - it deletes the head node
 * @head: numbers
 * Return: number of head
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;

	int S;

	if (*head == NULL)
		return (0);
	S = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (S);
}

