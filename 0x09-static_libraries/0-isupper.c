#include "main.h"

/**
 * _isupper - checks for upper case characters
 * @c: function parameter
 * Return: it returns 1 if success otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
