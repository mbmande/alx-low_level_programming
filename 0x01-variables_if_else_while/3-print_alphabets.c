#include <stdio.h>
/**
 * main - my main function
 *
 * Return: return 0 when success
 */

int main(void)
{
	char i;
	char o;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (o = 'A'; o <= 'Z'; o++)
		putchar(o);
	putchar('\n');
	return (0);

}
