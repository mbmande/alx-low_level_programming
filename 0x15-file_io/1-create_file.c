#include "main.h"

/**
 * create_file - it creates one
 * @filename: parameter
 * @text_content: parameter
 * Return: 1 if success
 */

int create_file(const char *filename, char *text_content)
{
	int rf, thel, other;

	if (filename == NULL)
		return (-1);

	rf = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (rf == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (thel = 0; text_content[thel]; thel++)
		;

	other = write(rf, text_content, thel);

	if (other == -1)
		return (-1);

	close(rf);
	return (1);
}
