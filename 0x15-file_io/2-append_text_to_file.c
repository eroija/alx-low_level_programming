#include "main.h"

/**
 * append_text_to_file - function that appends text at the
 * end of the file
 * @filename: the filename
 * @text_content: null terminating string to add at the
 * end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, wr, j = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (j = 0; text_content[j];)
			j++;
	}
	i = open(filename, O_WRONLY | O_APPEND);
	wr = write(i, text_content, j);

	if (wr == -1 || i == -1)
		return (-1);
	close(i);
	return (1);
}
