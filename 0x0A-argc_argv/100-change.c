#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: first
 * @argv: second
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int head, tail = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	head = atoi(argv[1]);

	if (head < 0)
		printf("%d\n", 0);

	while (head > 0)
	{
		if (head >= 25)
			head = head - 25;
		else if (head >= 10)
			head = head - 10;
		else if (head >= 5)
			head = head - 5;
		else if (head >= 2)
			head = head - 2;
		else if (head >= 1)
			head = head - 1;
		tail++;
	}
	printf("%d\n", tail);
	return (0);
}
