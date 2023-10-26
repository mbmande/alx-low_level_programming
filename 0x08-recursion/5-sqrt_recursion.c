#include "main.h"

/**
 * my_function - it prints the root
 * @num: first parameter
 * @rt: second parameter
 * Return: 0
 */

int my_function(int num, int rt)
{
	if ((rt * rt) > num)
		return (-1);
	else if ((rt * rt) == num)
		return (rt);
	else if ((rt * rt) < num)
		return (my_function(num, rt + 1));
	return (0);
}

/**
 * _sqrt_recursion - it returns the sqrt of a number
 * @n: the parameter
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n >= 0)
		return (my_function(n, 0));
	return (0);
}
