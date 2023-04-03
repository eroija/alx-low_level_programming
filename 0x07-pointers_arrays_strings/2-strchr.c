#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: input
 * @c: input
 * Return: pointer ti first occurence of c
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
