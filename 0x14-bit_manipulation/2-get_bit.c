#include "main.h"

/**
 * get_bit - it prints the value of bits
 * @n: number paarmeter
 * @index: the index
 * Return: the value or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int dvs;
	unsigned long int chck;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	dvs = 1 << index;
	chck = n & dvs;
	if (chck == dvs)
		return (1);
	return (0);
}
