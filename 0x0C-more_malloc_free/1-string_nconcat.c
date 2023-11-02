#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - it concat string
 * @s1: first
 * @s2: second
 * @n: num byte
 * Return: output
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len = 0, len2 = 0;
	char *out;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;

	out = malloc(sizeof(char) * (len + n) + 1);
	
	if (out == NULL)
		return (NULL);
	if (n >= len2)
	{
		for (i = 0; s1[i] != '\0'; i++)
			out[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			out[len + i] = s2[i];
		out[len + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			out[i] = s1[i];
		for (i = 0; i < n; i++)
			out[len + i] = s2[i];
		out[len + i] = '\0';
	}
	return (out);
}
