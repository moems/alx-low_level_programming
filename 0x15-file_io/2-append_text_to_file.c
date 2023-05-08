#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of file.
 * @text_content: content to be appended to file.
 *
 * Return:	 (1) On success.
 *		(-1) On Failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n_write, i = 0;

	if (!filename)
		return (-1);

	while (text_content[i])
		i++;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	n_write = write(fd, text_content, i);
	close(fd);

	if (n_write == -1)
		return (-1);
	else
		return (1);
}
