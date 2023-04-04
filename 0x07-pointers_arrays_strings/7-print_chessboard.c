#include "main.h"
/**
 * print_chessboard - function that prints the chessboard
 * @a: array
 * Return: Always (0)
 */

void print_chessboard(char (*a)[8])
{
	int a;
	int b;

	for (a = 0; a < 8; a++)
	{
		for (b = 0; b < 8; b++)
			_putchar(a[a][b]);
		putchar('\n');

	}
	return (0);

}
