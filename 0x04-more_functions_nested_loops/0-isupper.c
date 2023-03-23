#include "main.h"

/**
 * _isupper - function toprint upper case
 *
 *@c: parameter to be printed
 *
 * Return: 1 if its uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
