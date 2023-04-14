#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates 2 strings
 * @s1: string destination
 * @s2: string source
 * @n: number of bytes
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *b;
	unsigned int len1, len2, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n > len2)
		n = len2;
	b = malloc((len1 + n + 1) * sizeof(char));

	if (b == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		b[i] = s1[i];

	for (; i < (len1 + n); i++)
		b[i] = s2[i - len1];

	b[i] = '\0';

return (b);
}
