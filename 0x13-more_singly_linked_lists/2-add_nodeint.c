#include "lists.h"

/**
 * add_nodeint - it adds an integer node at the beginning
 * @n: number to be printed
 * @head: it stores the address of the head node
 * Return: the address of head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	int num = n;

	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = num;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
