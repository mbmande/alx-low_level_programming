#include "main.h"

/**
 * str_concat - two string conca
 * @s1: first string
 * @s2: second string
 * Return: new allocated space
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i;
	char *out;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;

	out = malloc(sizeof(char) * (len1 + len2) + 1);

	if (out == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		out[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		out[len1 + i] = s2[i];
	return (out);

}
