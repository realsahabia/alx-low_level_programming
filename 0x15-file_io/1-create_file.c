#include "main.h"
/**
  * create_file - function that creates a file.
  * @filename: pointer to the file to be created.
  * @text_content: pointer to the string to write to the file.
  *
  * Return: 1 on success, -1 on failure.
  */

int create_file(const char *filename, char *text_content)
{
	int new_file, write_content, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}

	new_file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_content = write(new_file, text_content, len);

	if (new_file == -1 || write_content == -1)
		return (-1);

	close(new_file);

	return (1);
}
