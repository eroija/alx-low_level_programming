#include "main.h"
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Create a function that creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write
 * to the file
 * Return: 1 on success, -1
 */

int create_file(const char *filename, char *text_content)
{
	int f;
	int count = 0;
	int w;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}
	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(f, text_content, count);
	if (f == -1 || w == -1)
		return (-1);
	close(f);

	return (1);
}
