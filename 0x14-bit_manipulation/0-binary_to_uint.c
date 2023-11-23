#include "main.h"

/**
 * binary_to_unit - it converts binary to an unsigned int
 * @b: it stores the binary numbers
 * Return: number
 */

unsigned int binary_to_uint(const char *b)
{
	int w;
	unsigned int number;

	number = 0;
	if (!b)
		return (0);

	for (w = 0; b[w] != '\0'; w++)
	{
		if (b[w] != '0' && b[w] != '1')
			return (0);
	}
	for (w = 0; b[w] != '\0'; w++)
	{
		number <<= 1;
		if (b[w] == '1')
			number += 1;
	}
	return (number);
}
