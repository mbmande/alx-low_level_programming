#include "main.h"

/**
 * set_bit - it sets values to bits
 * @n: number parameter
 * @index: the index
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int value;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	value = 1 << index;
	*n = *n | value;
	return (1);
}
