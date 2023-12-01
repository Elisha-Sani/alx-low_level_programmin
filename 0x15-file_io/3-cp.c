#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *make_buffer(char *file);
void cfile(int fd);

/**
 * make_buffer - Allocates 1024 bytes to a buffer.
 * @file: name of the file storing char.
 *
 * Return: Pointer to the allocated buffer.
 */
char *make_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * cfile - Closes the file descriptors.
 * @fd: File descriptor to be closed.
 */
void cfile(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprinf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies contents of a file to another.
 * @argc: number of arguments in the command line.
 * @argv: Array of pointers to the arguments.
 *
 * Return: 0 on success or 97, 98, 99, 100 on error.
 */
int main(int argc, char *argv[])
{
	int from, to, rd, wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = make_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wr = write(to, buffer, rd);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		rd = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	cfile(from);
	cfile(to);

	return (0);
}
