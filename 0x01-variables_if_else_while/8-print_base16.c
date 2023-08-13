#include <stdio.h>

/**
 * main -my main funtion
 *
 * Return: 0 when successful
 */

int main(void)
{
	int i;
	char o;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (o = 'a'; o <= 'f'; o++)
		putchar(o);
	putchar('\n');
	return (0);
}
