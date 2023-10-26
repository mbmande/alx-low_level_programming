#include "main.h"

/**
 * prime - it finds the prime
 * @x: first parameter
 * @i: second parameter
 * Return: 0
 */

int prime(int x, int i)
{
	if (x <= 1 || (x != i && x % i == 0))
		return (0);
	else if (x == i)
		return (1);
	return (prime(x, i + 1));
}

/**
 * is_prime_number - prime finder
 * @n: input number
 * Return: prime
 */

int is_prime_number(int n)
{
	return (prime(n, 2));
}

