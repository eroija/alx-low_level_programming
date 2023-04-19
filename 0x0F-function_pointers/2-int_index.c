#include "function_pointers.h"
/**
 * int_index - function that searches for an interger
 * @array: array of integers
 * @size: number of elements in an array
 * @cmp: function pointer
 * Return: index of the first element, -1 if no element matches
 * and -1 if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
		if (cmp(array[a]))
			return (a);
	return (-1);
}
