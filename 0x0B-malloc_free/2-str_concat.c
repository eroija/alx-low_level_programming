#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: pointer
 * @s2: pointer
 * Return: pinter to a newly allocated space in memory
 * which contains the contents of s1, followed by the
 * contents of s2 and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	char *duo;
	int i, j;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";


	i = 0;
	while (s1[i] != '\0')
		i++;

	j = 0;
	while (s2[j] != '\0')
		j++;

	duo = malloc(sizeof(char) * (i + j + 1));

	if (duo == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
		duo[i] = s1[i];
	i++;

	j = 0;
	while (s2[j] != '\0')
		duo[i] = s2[j];
	i++, j++;
	return (duo);
}
