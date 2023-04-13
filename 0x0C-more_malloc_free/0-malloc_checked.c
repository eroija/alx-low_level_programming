#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - function that allocates memory
 * using malloc
 * @b: memory size to be allocated
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *i = malloc(b);

	if (i == NULL)
		exit(98);

	return (i);
}
