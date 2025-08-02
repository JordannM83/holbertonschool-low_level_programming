#include "main.h"

#define BUFFER_SIZE 1024

/**
 * close_file - Closes a file descriptor with error handling
 * @file_to_close: The file descriptor to close
 */
void close_file(int file_to_close)
{
	if (close(file_to_close) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to_close);
		exit(100);
	}
}

/**
 * open_source_file - Opens the source file for reading
 * @filename: Name of the source file
 * Return: File descriptor of the opened file
 */
int open_source_file(char *filename)
{
	int file_fd;

	file_fd = open(filename, O_RDONLY);
	if (file_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (file_fd);
}

/**
 * open_dest_file - Opens the destination file for writing
 * @filename: Name of the destination file
 * @source_fd: Source file descriptor to close if error
 * Return: File descriptor of the opened file
 */
int open_dest_file(char *filename, int source_fd)
{
	int file_fd;

	file_fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_fd == -1)
	{
		close_file(source_fd);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (file_fd);
}

/**
 * copy_file_data - Copies data from source to destination
 * @file_from: Source file descriptor
 * @file_to: Destination file descriptor
 * @src_name: Source filename for error messages
 * @dest_name: Destination filename for error messages
 */
void copy_file_data(int file_from, int file_to, char *src_name,
		     char *dest_name)
{
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			close_file(file_from);
			close_file(file_to);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_name);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		close_file(file_from);
		close_file(file_to);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_name);
		exit(98);
	}
}

/**
 * main - Copies the content of a file to another file
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 on success, exits with error codes 97-100 on failure
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open_source_file(argv[1]);
	file_to = open_dest_file(argv[2], file_from);

	copy_file_data(file_from, file_to, argv[1], argv[2]);

	close_file(file_from);
	close_file(file_to);

	return (0);
}
