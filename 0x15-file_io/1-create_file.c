#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>


/**
 * create_file - function that creates a file
 * @filename: file to be created
 * @text_content: a null terminating string
 * to write to the file
 * Return: 1 0n success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int f, i = 0, total = 1;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[i])
			i++;
		total = write(f, text_content, i);
	}
	if (total == -1)
		return (-1);
	close(f);
	return (1);
}
