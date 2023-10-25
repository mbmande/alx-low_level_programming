#include "main.h"

/**
 * _pow_recursion - it cal the raised to the power
 * @x: first parameter
 * @y: second parameter
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y > 0)
	{
		return (x * _pow_recursion(x, (y - 1)));
		return (0);
	}
}
