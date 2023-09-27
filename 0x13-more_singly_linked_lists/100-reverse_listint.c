#include "lists.h"

/**
 * reverse_listint - it reverse the list
 * @head: only parameter
 * Return: head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *pv, *crnt, *next;

	pv = NULL;
	crnt = *head;
	next = NULL;

	while (crnt != NULL)
	{
		next = crnt->next;
		crnt->next = pv;
		pv = crnt;
		crnt = next;
	}

	*head = pv;
	return (*head);
}
