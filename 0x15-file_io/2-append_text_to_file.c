#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

/**
 * append_text_to_file - function that appends text at the end of the file
 * @filename: name of the file
 * @text_content: null terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	int w;
	int let;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		for (let = 0; text_content[let]; let++)
			;
		w = write(f, text_content, let);
		if (w == -1)
			return (-1);
	}
	close(f);
	return (1);
}
