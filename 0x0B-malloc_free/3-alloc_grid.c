#include "main.h"

/**
 * alloc_grid - dimentional
 * @width: column
 * @height: row
 * Return: out
 */

int **alloc_grid(int width, int height)
{
	int i, j, **out;

	if (width <= 0 || height <= 0)
		return (NULL);

	out = malloc(sizeof(int *) * height);

	if (out == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		out[i] = malloc(sizeof(int) * width);

		if (out[i] == NULL)
		{
			free(out);
			for (j = 0; j <= height; j++)
				free(out[j]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			out[i][j] = 0;
	}
	return (out);
}
