#include "main.h"

/**
 * _strncat - it concatenates n number of src to dest
 * @dest: destination parameter
 * @src: source parameter
 * @n: number of strings to dest destination
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len + i] = src[i];
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}
