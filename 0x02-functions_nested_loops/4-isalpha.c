#include "main.h"

/*
 * _isalpha() - checks for char alphabet
 *
 * @c - char to be checked
 *
 * Return: 1 if is alphabet, lower or upper
 * and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
