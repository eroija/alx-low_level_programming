#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: point of memory location where memory will be set
 * @b: value to be copied to the memory block
 * @n: no. of bytes in memory block which will store our value
 * Return: change array with new value
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
