#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using Jump Search.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 * Return: Index of the first occurrence of 'value', or -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	size_t step = sqrt(size);
	size_t prev = 0;

	while (array[min(step, size) - 1] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", step, array[step]);
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			return (-1);
	}

	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev++;
		if (prev == min(step, size))
			return (-1);
	}

	if (array[prev] == value)
		return ((int)prev);

	return (-1);
}
