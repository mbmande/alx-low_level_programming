#include "main.h"

/**
 * factorial - it finds the factorial of a number
 * @n: the factorial to find
 * Return: 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	else if (n > 0)
		return (n * factorial(n - 1));
	return (0);
}
