#include "main.h"

/**
 * create_array - list of arrays
 * @size: size of it
 * @c: where to store it
 * Return: alo;
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *alo;

	if (size == 0)
		return (NULL);

	alo = malloc(sizeof(char) * size);

	if (alo == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		alo[i] = c;
	return (alo);
}
