#include <stdio.h>

/**
 * main - my main function
 *
 * Return: 0 when successful
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
}
