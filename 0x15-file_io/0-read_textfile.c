#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters it prints and reads
 * Return: e actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t r;
	ssize_t w;
	char *ptr;

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);

	ptr = malloc(sizeof(char) * letters);
	if (ptr == NULL)
	{
		return (0);
	}

	r = read(f, ptr, letters);
	if (r == -1)
	{
		free(ptr);
		close(f);
		return (0);
	}

	w = write(STDOUT_FILENO, ptr, r);
	if (w == -1)
	{
		free(ptr);
		close(f);
		return (0);
	}
	close(f);
	return (r);
}
