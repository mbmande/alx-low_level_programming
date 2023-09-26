#include "lists.h"

/**
 * add_nodeint_end - it adds node the end
 * @n: numbers in the node
 * @head: head of the linked list
 * Return: the address of the head
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int num = n;

	listint_t *newnode, *tmp;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = num;
	newnode->next = NULL;
	tmp = *head;

	if (tmp == NULL)
		*head = newnode;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newnode;
	}
	return (*head);
}
