#include "main.h"

/**
 * _puts_recursion - it prints char one after ther other
 * @s: character to be printed
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
		

