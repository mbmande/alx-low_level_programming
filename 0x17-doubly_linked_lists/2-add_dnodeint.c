#include "lists.h"

/**
 * add_dnodeint - it adds node at the beginning
 * @head: the head
 * @n: new node
 * Return: new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nw;

	nw = malloc(sizeof(dlistint_t));
	if (nw == NULL)
		return (NULL);

	nw->n = n;
	nw->prev = NULL;
	nw->next = *head;

	if (*head != NULL)
		(*head)->prev = nw;
	*head = nw;

	return (nw);
}
