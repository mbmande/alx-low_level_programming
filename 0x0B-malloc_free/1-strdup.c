#include "main.h"

/**
 * _strdup - it changes allocation
 * @str: destination
 * Return: pointer
 */

char *_strdup(char *str)
{
	int i, cunt = 0;
	char *cpy;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		cunt++;

	cpy = malloc(sizeof(char) * cunt + 1);

	if (cpy == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		cpy[i] = str[i];

	return (cpy);
}
