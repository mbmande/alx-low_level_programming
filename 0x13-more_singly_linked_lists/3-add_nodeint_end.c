#include "lists.h"

/**
 * add_nodeint_end - it adds newnode at the end of the list
 * @head: the head pointer
 * @n: the new node
 * Return: head
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *sabo, *por;

	(void)por;

	sabo = malloc(sizeof(listint_t));
	if (sabo == NULL)
		return (NULL);

	sabo->n = n;
	sabo->next = NULL;
	por = *head;
	if (*head == NULL)
		*head = sabo;
	else
	{
		while (por->next != NULL)
			por = por->next;
		por->next = sabo;
	}
	return (*head);
}
