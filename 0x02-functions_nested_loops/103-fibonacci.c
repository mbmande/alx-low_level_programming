#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int limit = 4000000;
	int num1 = 1;
	int num2 = 2;
	int next;
	int sum;

	while (next <= limit)
	{
		next = num1 + num2;
		if (next % 2 == 0)
			sum = sum + next;
		num1 = num2;
		num2 = next;
	}
	printf("%d\n", sum);
	return (0);
}
