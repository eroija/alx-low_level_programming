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
	int base_two;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
		;
	for (i--, base_two = 1; i >= 0; i--, base_two *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] & 1)
		{
			j += base_two;
		}
	}
	return (j);
}


