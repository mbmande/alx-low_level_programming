#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - it allocate for an array
 * @nmemb: nums of membs
 * @size: size of array
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *out;

	if (nmemb == 0 || size == 0)
		return (NULL);

	out = calloc(nmemb, size);
	if (out == NULL)
		return (NULL);
	else
		return (out);
}

