#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - malloc allocation
 * @b: the size
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	char *out;

	out = malloc(b);

	if (out == NULL)
	exit(98);
	return (out);
}
