#include "main.h"
/**
 *print_diagonal - prints diagonal line
 *
 *@n: number of times
 *
 *Return: void
 */
void print_diagonal(int n)
{
	int i;

	for (i =  0; i < n; i++)
	{
		_putchar('/');
	}
	_putchar('\n');
}
