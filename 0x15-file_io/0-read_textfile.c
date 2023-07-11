#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- function that reads a text file and print to STDOUT.
 * @filename: text file to be read.
 * @letters: number of letters to be read.
 * Return: bytes_w - actual number of bytes read and printed.
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t file_descriptor;
	ssize_t bytes_w;
	ssize_t num_bytes;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	num_bytes = read(file_descriptor, buf, letters);
	bytes_w = write(STDOUT_FILENO, buf, num_bytes);

	free(buf);
	close(file_descriptor);
	return (bytes_w);
}
