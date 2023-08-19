#include "main.h"

/**
 * print_diagonal - prints diagonal using the '\' character
 * @n: number of items the '\' should be printed
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= n; j++)
			
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');	
		}
	}
}
