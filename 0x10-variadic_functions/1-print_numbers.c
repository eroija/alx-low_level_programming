#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: Always (0) Sucess
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;

	va_list pa;

	va_start(pa, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(pa, int));
		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(pa);
}
