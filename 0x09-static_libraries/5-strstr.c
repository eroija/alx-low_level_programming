#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: string to be searched
 * @needle: string to be located
 * Return: Always (0) Sucess
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}
		if (*a == '\0')
			return (haystack);
	}
	return (0);
}
