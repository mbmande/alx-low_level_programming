#include "main.h"

/**
 * _strlen_recursion - it print the lenght of str
 * @s: str to be printed
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
