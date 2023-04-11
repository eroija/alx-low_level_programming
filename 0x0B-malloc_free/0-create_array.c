#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and
 * initializes it with specific cgar
 * @size: size of array
 * @c: character to assign
 * Return: null if size = 0 and
 * pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int j;

	array = malloc(sizeof(char) * size);

	if (size == 0 || array == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		array[j] = c;
	}
	return (array);
}
