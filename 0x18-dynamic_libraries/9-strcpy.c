#include "main.h"
/**
 * _strcpy - a function that copies the string
 * pointed by the source
 * @dest: copy to
 * @src: copy from
 * Return; string
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for (; b < 1; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
