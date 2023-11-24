#include "main.h"

/**
 * flip_bits - the numbers of bits
 * @n: parameter 1
 * @m: parameter 2
 * Return: number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int o;
	int cunt = 0;
	unsigned long int now;
	unsigned long int later = n ^ m;

	for (o = 63; o >= 0; o--)
	{
		now = later >> o;
		if (now & 1)
			cunt++;
	}
	return (cunt);
}
