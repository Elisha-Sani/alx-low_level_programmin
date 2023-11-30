#include "main.h"

/**
 * append_text_to_file - Function that appends text
 * @filename: Name of the file
 * @text_content: Null terminated string
 *
 * Return: 1 Success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int wc;
	int len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (!fd)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	wc = write(fd, text_content, len);

	if (wc == -1 || wc != len)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
