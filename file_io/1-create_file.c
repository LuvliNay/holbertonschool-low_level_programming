#include "main.h"

/**
 * create_file - creates a file...duh.
 * @filename: pointer.
 * @text_content: pointer.
 * Return: SUCCESS 1, or FAILED -1
 */
int create_file(const char *filename, char *text_content)
{
	int count = 0;
	int fd = 0;
	int output = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[count] != '\0')
			count++;
	}
	else
	{
		close(fd);
		return (1);
	}

	output = write(fd, text_content, count);
	if (output == -1 || output != count)
		return (-1);

	close(fd);
	return (1);
}
