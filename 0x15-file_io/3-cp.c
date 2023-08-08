#include "main.h"


/**
 * error_exit - Print an error message to STDERR and exit with a specific code.
 * @message: The error message format.
 * @arg: The argument for the error message.
 */
void error_exit(const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(EXIT_FAILURE);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command line arguments.
 * @argv: An array of command line arguments.
 * Return: 0 on success, other values on failure.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char *buffer[1024];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		error_exit("Usage: %s file_from file_to\n", argv[0]);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		error_exit("Error: Can't read from file %s\n", argv[1]);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		error_exit("Error: Can't write to %s\n", argv[2]);
	}

	while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			error_exit("Error: Can't write to %s\n", argv[2]);
		}
	}

	if (bytes_read == -1)
	{
		error_exit("Error: Can't read from file %s\n", argv[1]);
	}

	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		error_exit("Error: Can't close fd\n", "");
	}

	return 0;
}
