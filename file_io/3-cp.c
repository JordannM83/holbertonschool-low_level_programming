#include "main.h"

#define BUFFER_SIZE 1024

/**
 * error_close - close file descriptor and handle errors
 * @fd: file descriptor to close
 */
void error_close(int fd)
{
	int close_result;

	close_result = close(fd);
	if (close_result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * copy_data - copy data from source to destination
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 * @argv: arguments array
 */
void copy_data(int fd_from, int fd_to, char **argv)
{
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd_from);
		close(fd_to);
		exit(98);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, exit codes 97-100 on various failures
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_result;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close_result = close(fd_from);
		if (close_result == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
			exit(100);
		}
		exit(99);
	}

	/* Ensure correct permissions regardless of umask */
	if (fchmod(fd_to, 0664) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close_result = close(fd_from);
		if (close_result == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
			exit(100);
		}
		error_close(fd_to);
		exit(99);
	}

	copy_data(fd_from, fd_to, argv);
	error_close(fd_from);
	error_close(fd_to);

	return (0);
}
