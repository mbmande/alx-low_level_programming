#include <stdio.h>

/**
 * main - it returns the number of args
 * @argc: first parameter
 * @argv: second parameter
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc -1);
	return (0);
}
