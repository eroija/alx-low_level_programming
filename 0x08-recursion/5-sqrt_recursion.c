#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number
 * @n: base number
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}


/**
 * sqr - function that returns natural square root
 * @n: number
 * @i: iterator
 * Return: square root
 */

int sqr(int n, int i)
{
	if (n * n == i)
		return (n);
	else if (n == i)
		return (-1);
	else
		return (sqr(n, i + 1));

}
