#include "main.h"

/**
 * factorial - it prints the the factorial of a number
 * @n: the factorial number
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
