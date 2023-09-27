#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *tmp;

	unsigned int i;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	tmp = *head;
	for (i = 0; i < idx - 1 && tmp != NULL; i++)
		tmp = tmp->next;

	if (tmp == NULL)
		return (NULL);

	newnode->next = tmp->next;
	tmp->next = newnode;

	return (newnode);
}
