#include "main.h"

/**
 * _print_rev_recursion - it print in reverse
 * @s: characters to be printed
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
		return (0);
}
