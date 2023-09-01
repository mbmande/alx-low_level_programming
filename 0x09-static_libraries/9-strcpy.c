#include "main.h"
#include <stdio.h>

/**
 * _strcpy - it copies the string pointed to dest from src
 * @src: source parameter
 * @dest: destination parameter
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
