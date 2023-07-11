#include "main.h"
/**
  * append_text_to_file - function that creates a file.
  * @filename: pointer of the file to be appended.
  * @text_content: pointer to the string to append to the file.
  *
  * Return: 1 on success, -1 on failure.
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int append_file, write_content, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}

	append_file = open(filename, O_WRONLY | O_APPEND);
	write_content = write(append_file, text_content, len);

	if (append_file == -1 || write_content == -1)
		return (-1);

	close(append_file);

	return (1);
}
