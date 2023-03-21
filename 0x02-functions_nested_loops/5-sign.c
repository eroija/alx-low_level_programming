#include "main.h"

/**
  * print_sign - function that prints sign of a number
  *
  * @n: function parameter
  *
  * Return: 1 and prints + if n is greater than zero
  * and prints 0 if n is zero
  * and prints - if n is less than zero
  */


int print_sign(int n)
{
	if (n > o)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
