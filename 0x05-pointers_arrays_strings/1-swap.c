#include <stdio.h>

/**
 * swap_int - function swap two integers
 * @a: value 1
 * @b: value 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	 int c;

	 c = *a;
	 *b = *a;
	 *b = c;
}
