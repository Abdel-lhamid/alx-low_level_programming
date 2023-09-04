#include "main.h"

/**
 * create_file - Creates a file and writes a text into it.
 * @filename: The name of the file to create.
 * @text_content: NULL-terminated string to write into the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, write_res;
	size_t len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	while (text_content[len])
		len++;

	write_res = write(fd, text_content, len);

	if (write_res == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
