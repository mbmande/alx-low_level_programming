#include "lists.h"

/**
 * dlistint_t *add_dnodeint_end - at the end
 * @head: the head
 * @n: new node
 * Return: node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nw;
	dlistint_t *ls;

	nw = malloc(sizeof(dlistint_t));
	if (nw == NULL)
		return (NULL);

	nw->n = n;
	nw->next = NULL;
	
	if (*head == NULL)
	{
		nw->prev = NULL;
		*head = nw;
		return (nw);
	}

	ls = *head;
	while (ls->next != NULL)
		ls = ls->next;
	ls->next = nw;
	nw->prev = ls;

	return (nw);
}
