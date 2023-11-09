#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - it prints something
 * @format: arguments
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *string, *div = "";

	va_list args;

	va_start(args, format);

	if (format)
	{
		while(format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", div, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", div, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", div, va_arg(args, double));
					break;
				case 's':
					string = va_arg(args, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", div, string);
					break;
				default:
					i++;
					continue;
			}
			div = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
