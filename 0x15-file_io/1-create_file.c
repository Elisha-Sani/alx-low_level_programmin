#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Function that creates a file
 * @filename: file to be created
 * @text_content: null terminated string to write file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_count;
	size_t length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length])
			length++;

		write_count = write(fd, text_count, length);
		if (write_count == -1 || write_count != (ssize_t)length)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
