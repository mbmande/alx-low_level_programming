#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *pv;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	tmp = *head;
	pv = NULL;

	if (index == 0)
	{
		*head = (*head)->next;
	free(tmp);
	return 1;
	}

	for (i = 0; i < index && tmp != NULL; i++)
	{
		pv = tmp;
		tmp = tmp->next;
	}

	if (tmp == NULL)
		return -1;

	pv->next = tmp->next;
	free(tmp);

	return (1);
}

