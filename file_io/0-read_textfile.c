#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 *         0 if file can't be opened or read, filename is NULL,
 *         or write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rcount, wcount;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	rcount = read(fd, buf, letters);
	if (rcount == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	wcount = write(STDOUT_FILENO, buf, rcount);
	free(buf);
	close(fd);

	if (wcount != rcount)
		return (0);

	return (wcount);
}
