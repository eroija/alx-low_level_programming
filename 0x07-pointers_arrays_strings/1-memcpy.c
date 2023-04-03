#include "main.h"
/**
 * _memcpy - function that copies memory
 * @dest: pointer to the destination object
 * @src: pointer to the source object
 * @n: number of bytes to copy
 * Return: number of bytes
 */

ichar *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < n; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
