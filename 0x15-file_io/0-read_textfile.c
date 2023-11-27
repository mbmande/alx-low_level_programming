#include "main.h"

/**
 * read_textfile - it reads the text contents
 * @filename: parameter
 * @letters: parameter
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *container;
	int rf;
	ssize_t wr, rd;

	if (filename == NULL)
		return (0);

	rf = open(filename, O_RDONLY);
	if (rf == -1)
		return (0);

	container = malloc(sizeof(char) * letters);
	if (container == NULL)
		return (0);

	rd = read(rf, container, letters);
	if (rd == -1)
	{
		free(container);
		close(rf);
		return (0);
	}

	wr = write(STDOUT_FILENO, container, rd);
	if (wr == -1)
	{
		free(container);
		close(rf);
		return (0);
	}
	close(rf);
	return (rd);
}
