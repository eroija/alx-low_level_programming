#include "main.h"
/**
 * set_bit - function that sets the value of a bit
 * to 1 at a given index
 * @n: pointer to a number
 * @index: index of the bit to set 1
 * Return: 1 if it works or
 * -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
