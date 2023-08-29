#include "main.h"

/**
 * print_chessboard - it prints the chessboard
 * @a: function parameter
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; i < 8; j++)
			putchar(a[i][j]);
		putchar('\n');
	}
}
