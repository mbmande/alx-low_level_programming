#include "main.h"

/**
 * get_endianness - it checks it
 * Return: 0 or 1
 */

int get_endianness(void)
{
	char *m;
	int o;

	o = 1;
	m = (char *)&o;
	return (*m);
}
