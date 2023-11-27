#include "main.h"

/**
 * append_text_file - it appends text
 * @filename: the parameter
 * @text_content: parameter
 * Return: 1 if success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int rf, thel, other;

	if (filename == NULL)
		return (-1);

	rf = open(filename, O_WRONLY | O_APPEND);

	if (rf == -1)
		return (-1);

	if (text_content)
	{
		for (thel = 0; text_content[thel]; thel++)
			;

		other = write(rf, text_content, thel);

		if (other == -1)
			return (-1);
	}
	close(rf);
	return (1);
}
