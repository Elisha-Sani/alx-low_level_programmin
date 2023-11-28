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
	int write_count;
	int nletters;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters];)
		nletters++;

	write_count = write(fd, text_count, nletters);

	if (write_count == -1)
		return (-1);

	close(fd);

	return (1);
}
