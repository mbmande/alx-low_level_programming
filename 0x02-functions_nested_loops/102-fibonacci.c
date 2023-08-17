#include <stdio.h>

/**
 * main - main prints fibonacci numbers
 * Return: void
 */

int main(void)
{
	unsigned long int num1 = 1;
	unsigned long int num2 = 2;
	unsigned long int next;
	int i;

	printf("%lu, ", num1);
	for (i = 0; i < 49; i++)
	{
		printf("%lu", num2);
		next = num1 + num2;
		num1 = num2;
		num2 = next;
		if (i != 48)
			printf(", ");
	}
	printf("\n");
	return (0);
}
