#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * read_textfile- read text file and print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	return (0);

	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	return (0);

	char *buffer = malloc(letters);

	if (buffer == NULL)
	{
	close(fd);
	return (0);
	}

	ssize_t bytes_read = read(fd, buffer, letters);

	if (bytes_read == -1)
	{
	free(buffer);
	close(fd);
	return (0);
	}

	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(fd);

	if (bytes_written == -1 || bytes_written != bytes_read)
	return (0);

	return (bytes_written);

}
