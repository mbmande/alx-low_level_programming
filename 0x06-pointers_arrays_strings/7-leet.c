#include "main.h"

/**
 * leet - it encodes a string into 1337
 * @m: function parameter
 * Return: m
 */

char *leet(char *m)
{
	int i, j;
	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; m[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (m[i] == a[j])
				m[i] = b[j];
		}
	}
	return (m);
}

