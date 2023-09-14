#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints string
 * @separator: separates between strings
 * @n: number of parameter
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		char *x = va_arg(arg, char *);

		if (x == NULL)
			printf("(nil)");
		else
			printf("%s", x);
		if (separator  != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
