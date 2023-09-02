#include <stdio.h>

/**
 * main - it prints the number of argument
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
		return (0);
}
