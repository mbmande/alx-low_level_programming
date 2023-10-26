#include "main.h"

/**
 * _strlen_recursion - it count the lenght of a string
 * @s: number of characters
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * str_com - it compare the cahracter of the string
 * @s: string to compare
 * @l: left parameter
 * @r: right parameter
 * Return: 0
 */

int str_com(char *s, int l, int r)
{
	if (*(s + l) == *(s + r))
	{
		if (l == r || l == r + 1)
			return (1);
		return (0 + str_com(s, l + 1, r - 1));
	}
	return (0);
}

/**
 * is_palindrome - it checks whether it's palindrome
 * @s: string to br printed
 * Return: 0 if it's not palindrome otherwise 1
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (str_com(s, 0, _strlen_recursion(s) - 1));
}
