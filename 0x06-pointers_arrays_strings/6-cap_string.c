#include "main.h"

/**
 * cap_string - it capitalizes words of string
 * @n: number of words to be capitalize
 * Return: n
 */

char *cap_string(char *n)
{
	int i;
	int j;
	char sp[13] = {' ', '\t', '\n', ',', ';', '.',
'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; n[i] != 0; i++)
	{
		if (i == 0 && n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		for (j = 0; j < 13; j++)
		{
			if (n[i] == sp[j])
			{
				if (n[i + 1] >= 'a' && n[i + 1] <= 'z')
					n[i + 1] = n[i + 1] - 32;
			}
		}
	}
	return (n);
}
