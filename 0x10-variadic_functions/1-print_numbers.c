#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - it prints numbers
 * @separator: print string
 * @n: args nums
 */

void print_numbers(const char * separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			printf("%d", va_arg(args, int));
			if (i != n - 1)
				printf("%s", separator);
		}
		else
			printf("%d", va_arg(args, int));
	}
	putchar('\n');
	va_end(args);
}
