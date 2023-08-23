#include "main.h"

/**
 * _strncpy - it copies a string
 * @dest: value 1
 * @src: value 2
 * @n: value 3
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);

}
