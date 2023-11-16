#include "lists.h"

/**
 * add_node_end - it adds a node at the end
 * @head: the head
 * @str: the string
 * Return: head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nnode;
	list_t *hold;
	unsigned int i;
	unsigned int cunt = 0;

	nnode = malloc(sizeof(list_t));
	if (nnode == NULL)
		return (NULL);
	nnode->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		cunt++;
	nnode->len = cunt;
	nnode->next = NULL;
	hold = *head;

	if (hold == NULL)
		*head = nnode;
	else
	{
		while (hold->next != NULL)
			hold = hold->next;
		hold->next = nnode;
	}
	return (*head);
}
