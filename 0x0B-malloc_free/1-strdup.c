#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory that contains
 * a copy of the string
 * @str: char
 * Return: Always (0) Sucess
 */

char *_strdup(char *str)
{
	int i, j;
	char *a;

	i = 0;
	while (str[i] != '\0')
		i++;

	a = malloc(sizeof(char) * (i + 1)); /* pointer to store the memory */

	if (a == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		a[j] = str[j];
	return (a);
}
