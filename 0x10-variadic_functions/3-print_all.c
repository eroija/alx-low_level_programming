#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything
 * @format: list of all arguments passed to the function
 * Return: Always (0) Sucess
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
				case 'f':
					printf("%s%f", sep, va_arg(list, int));
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;

			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}
