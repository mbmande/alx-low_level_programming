#include "main.h"

/**
 * argstostr - args concat
 * @ac: first parameter
 * @av: second parameter
 * Return: out
 */
char *argstostr(int ac, char **av)
{
	int i, j, cunt = 0, k = 0;
	char *out;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			cunt++;
		cunt++;
	}
	out = malloc(sizeof(char) * cunt + 1);
	if (out == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			out[k] = av[i][j];
			k++;
		}
		out[k++] = '\n';
	}
	out[k] = '\0';
	return (out);
}
