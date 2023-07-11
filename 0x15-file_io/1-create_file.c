#include <stdlib.h>
#include <unistd.h>
/**
  * create_file - function that creates a file.
  * @filename: pointer to the file to be created.
  * @text_content: pointer to the string to write to the file.
  *
  * Returns: 1 on success, -1 on failure.
  */

int create_file(const char *filename, char *text_content)
{
int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
