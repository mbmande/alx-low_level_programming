#include "main.h"

/**
 * _isdigit - it checks whether digit is 0 through 9
 * @c: function parameter
 * Return: return 1 if its and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

