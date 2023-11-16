#include "lists.h"

/**
 * add_node - it insert it in the beginning
 * @head: the head
 * @str: the string
 * Return: head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nnode;
	unsigned int i;
	unsigned int cunt = 0;

	nnode = malloc(sizeof(list_t));
	if (nnode == NULL)
		return (NULL);
	nnode->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		cunt++;
	nnode->len = cunt;
	nnode->next = *head;
	*head = nnode;

	return (*head);
}

