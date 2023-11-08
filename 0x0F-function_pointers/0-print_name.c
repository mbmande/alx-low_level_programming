#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - name to be printed
 * @name: name that will be printed
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

