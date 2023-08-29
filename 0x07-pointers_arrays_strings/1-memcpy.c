#include "main.h"

/**
 * _memcpy - copies memory
 * @dest: destination file
 * @src: source file
 * @n: number of byte to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
