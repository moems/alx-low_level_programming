#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the path to file to be read and printed.
 * @letters: number of letters it should read and print.
 *
 * Return: Number of bytes written to stdout.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, n_write, n_read;
	char *buf;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	n_read = read(fd, buf, letters);
	if (n_read == -1)
		return (0);

	n_write = write(STDOUT_FILENO, buf, n_read);

	free(buf);
	close(fd);
	if (n_write != n_read)
		return (0);
	else
		return (n_write);
}
