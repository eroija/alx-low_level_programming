#include "main.h"
#include <sys/types.h>
#include <sysstat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

/**
 * append_text_to_file - function that appends text at the end of the file
 * @filename: name of the file
 * @text_content: null terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f, w;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(f);
		return (1);
	}
	w = write(f, text_content, strlen(text_content));
	if (w == -1 || w != strlen(text_content))
	{
		close(f);
		return (-1);
	}
	close(f);
	return (1);

}
