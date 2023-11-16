#include <unistd.h>

/**
 * _putchar - it writes chars
 * @c: the char to print
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
