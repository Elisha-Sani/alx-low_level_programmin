#include "main.h"
#include <stdio.h>

#define buff_size 1024

void check_argc(int argc);
int open_file_from(char *file_from);
int open_file_to(char *file_to);
void copy_files(int file_from, int file_to);
void close_files(int file_from, int file_to);

/**
 * main - The start
 * @argc: The number of command line arguments
 * @argv: Command line arguments
 *
 * Return: 0 Success or one of 97, 98, 99, 100 on error
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;

	check_argc(argc);
	file_from = open_file_from(argv[1]);
	file_to = open_file_to(argv[2]);
	copy_files(files_from, file_to);
	close_files(file_from, file_to);

	return (0);
}

/**
 * check_argc - Checks the number of command line arguments
 * @argc: The number of command line arguments
 */
void check_argc(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * open_file_from - Opens the source file for reading
 * @file_from: The name of the source file
 *
 * Return: The file descriptor of the opened source file
 */
int open_file_from(char *file_from)
{
	int fd = open(file_from, O_RDONLY);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	return (fd);
}

/**
 * open_file_to - Opens the destination file for writing
 * @file_to: The name of the destination file
 *
 * Return: The file descriptor of the opened destination file
 */
int open_file_to(char *file_to)
{
	int fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", file_to);
		close(file_from);
		exit(99);
	}

	return (fd);
}

/**
 * copy_files - Copies content from the source file to the destination file
 * @file_from: The file descriptor of the source file
 * @file_to: The file descriptor of the destination file
 */
void copy_files(int file_from, int file_to)
{
	ssize_t rc, wc;
	char buffer[buff_size];

	while ((rc = open(file_from, buffer, buff_size)) > 0)
	{
		wc = write(file_to, buffer, rc);
		if (wc != rc)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			close(file_from);
			close(file_to);
			exit(99);
		}
	}

	if (rc == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}
}

/**
 * close_files - Closes the source and destination files
 * @file_from: The file descriptor of the source file
 * @file_to: The file descriptor of the destination file
 */
void close_files(int file_from, int file_to)
{
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_from);
		exit(100);
	}

	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_to);
		exit(100);
	}
}
