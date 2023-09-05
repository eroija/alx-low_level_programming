#include "main.h"
#include <stdio.h>
#define BUF_SIZE 1024

/**
 * main - main function to be performed
 * @argc: argument count
 * @argv: pointer for array of arguments
 * Return: Always 0 on Success
 */

int main(int argc char **argv)
{
	int f, g, t1, t2;
	char *b;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	b = malloc(BUF_SIZE * sizeof(char))
	if (buffer == NULL)
		return (0);

	f = open(argv[1], O_RDONLY);
	error_98(f, b, argv[1]);
	g = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	error_99(g, b, argv[2]);

	do {
		t1 = read(f, b, BUF_SIZE);
		if (read == 0)
			break;
		error_98(t1, b, argv[1]);
		t2 = write(g, buffer, t1);
		error_99(t2, b, argv[2]);
	} while (t2 >= BUF_SIZE);
	t1 = close(g);
	error_100(t1, b);
	free(buffer);
	return (0);
}

/**
 * error_98 - checks error 98
 * @f: checked value
 * @b: buffer
 * @argv: argument
 */

void error_98(int f, char *b, char *argv)
{
	if (f < 0)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);

		free(b);
		exit(98);


/**
 * error_99 - checks error 99
 * @f: value to chexk
 * @b: buffer
 * @argv: argument to check
 */

void error_99(int f, char *b, char *argv)
{
	if (f < 0)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
		free(b);
		exit(99);
}

/**
 * error_100 - checks error 100
 * @f: value to check
 * @b: buffer
 */

void error_100(int f, char *b)
{
	if (f < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", f);
		free(b);
		exit(100);
	}
}
}
