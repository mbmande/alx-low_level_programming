#include "main.h"

/**
 * print_line - it prints n number of lines
 * @n: function parameter
 * Return: 0 always
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
