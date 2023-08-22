#include "main.h"
#include <stdio.h>

/**
 * print_array - it prints the n elements of an array
 * @a: array to be used
 * @n: number of elements to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (a[i] != -1024)
			printf(", ");
	}
	printf("\n");
}
