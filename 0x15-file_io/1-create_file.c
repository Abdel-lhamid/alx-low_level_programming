#include "main.h"

/**
 * create_file - creates file with permissions rw------- and writes content in
 * if file already exists, don't change permissions and just truncate it
 * @filename: name to give to new file
 * @text_content: writes this content into file
 * Return: 1 on success, -1 on error
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;
	int n_wrote;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}
	for (len = 0; text_content[len]; len++)
		;

	n_wrote = write(fd, text_content, len);
	if (n_wrote == -1 || n_wrote != len)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
