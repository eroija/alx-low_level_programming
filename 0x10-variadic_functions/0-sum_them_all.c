#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns sum of
 * all its parameters
 * @n: number of arguments to be summed
 * Return: sum of all parametes or
 * if n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);

	return (sum);
}
