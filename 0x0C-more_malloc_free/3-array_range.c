#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - int arrays
 * @min: minimum num
 * @max: maximum num
 * Return: memory
 */

int *array_range(int min, int max)
{
	int i, size, *out;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	out = malloc(sizeof(int) * size);

	if (out == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		out[i] = min++;
	return (out);
}

