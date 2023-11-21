#include "lists.h"

/**
 * add_nodeint - it adds new node at the beginning
 * @head: the pointer to head
 * @n: the node to be created
 * Return: head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nnode;

	if (head == NULL)
		return (NULL);

	nnode = malloc(sizeof(listint_t));
	if (nnode == NULL)
		return (NULL);
	if (*head == NULL)
		nnode->next = NULL;
	else
		nnode->next = *head;
	nnode->n = n;
	*head = nnode;

	return (*head);
}
