#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings follwed by a
 * newline
 * @separator: string to be printed between strings
 * @n: number of strings passed t a function
 * Return: Always (0) Sucess
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *s;
	va_list string;

	va_start(string, n);

	for (a = 0; a < n; a++)
	{
		s = va_arg(string, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
