#include "main.h"

/**
 * get_bit - function that returns the value of a bit
 * at a given index
 * @n: number to search
 * @index: index at the bit
 * Return: value of the bit at index or
 * -1 if error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > 64)
		return (-1);
	i = (n >> index) & 1;
	return (i);
}
