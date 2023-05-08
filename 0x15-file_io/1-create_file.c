#include "main.h"

/**
 * create_file - creates a file and adds content.
 *		 Adds read and write permissions to owner only.
 *		 Truncates file if it already exists.
 * @filename: Path to file.
 * @text_content: content to be written to file.
 *
 * Return: On success (1).
 *	   On failure (-1).
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n_write, i = 0;

	if (!filename)
		return (-1);

	while (text_content[i])
		i++;

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (0);

	n_write = write(fd, text_content, i);

	close(fd);
	if (n_write == -1)
		return (0);
	else
		return (1);
}
