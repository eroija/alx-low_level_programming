#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number
 * to an unsigned int.
 * @b: string with the binary number.
 * Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int j = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++) /* loop through the string b to check characters */
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		j = 2 * j + (b[i] - '0');
	}
	return (j);
}
