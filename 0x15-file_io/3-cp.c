#include "main.h"

/**
 * main - Copies the contents of 1 file to another.
 * @ac: Argument count.
 * @av: Argument array.
 * Return:	(0) on Success.
 *	exit code 97 - if the number of arguments is incorrect.
 *	exit code 98 - if can't read from file_from, or file does not exist.
 *	exit code 99 - if create or write to file_to.
 *	exit code 100 - if cannot close any of the open files.
 */
int main(int ac, char *av[])
{
	int file_from, file_to, n_read, n_write;
	char *buf;

	verify_arguments(ac);
	buf = create_buf(av[2]);

	file_from = open(av[1], O_RDONLY);
	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	n_read = read(file_from, buf, BUFF_SIZE);

	do {
		if (file_from == -1 || n_read == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", av[1]);
			free(buf);
			exit(98);
		}

		n_write = write(file_to, buf, n_read);
		if (file_to == -1 || n_write == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", av[2]);
			free(buf);
			exit(99);
		}

		n_read = read(file_from, buf, BUFF_SIZE);
		file_to = open(av[2], O_WRONLY | O_APPEND);

	} while (n_read > 0);

	free(buf);
	close_file(file_from);
	close_file(file_to);

	return (0);
}

/**
 * close_file - close a fildes
 * @fd_value: the fildes value to be closed.
 */
void close_file(int fd_value)
{
	int closed;

	closed = close(fd_value);

	if (closed == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", fd_value);
		exit(100);
	}
}
/**
 * verify_arguments - verifies if the correct number of arguments are passed.
 * @ac: argument count
 */
void verify_arguments(int ac)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
/**
 * create_buf - mallocs a buffer of BUFF_SIZE.
 * @file_to: file_to.
 *
 * Return: Pointer to the malloced buffer.
 */
char *create_buf(char *file_to)
{
	char *buf = malloc(sizeof(char) * BUFF_SIZE);

	if (!buf)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file_to);
		exit(99);
	}

	return (buf);
}

