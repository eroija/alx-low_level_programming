#include "main.h"
/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number, otherwise returns 0
 * @n: number
 * Return: 1 if prime and 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}

/**
 * prime - determines if a number is prime
 * @n: number to evaluate
 * @j: iterator
 * Return: 1 if prime and 0 if not
 */

int prime(int n, int j)
{
	if (j <= 1)
	{
		return (1);
	}
	else
	{
		if (n % j == 0)
			return (0);
		else
			return (prime(n, j - 1));
	}
}
