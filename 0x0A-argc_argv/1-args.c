#include <stdio.h>
/**
 * main - function that prints the number of arguments
 * passed to it
 * @argc: argument count
 * @argv: argument vector
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
