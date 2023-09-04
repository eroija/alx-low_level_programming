#include "main.h"
#include <sys/types.h>
#include <sys.stat.h>
#include <fcntl.h>

/**
 * create_file - function that creates a file
 * @filename: file to be created
 * @text_content: a null terminating string
 * to write to the file
 * Return: 1 0n success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int f, wr, i;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}
	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(f, text_content, i);

	if (f == -1 || wr == -1)
		return (-1);

	close(f);
	return (1);
}
