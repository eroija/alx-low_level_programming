#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - function that returns sum of two numbers
 * @a: first number
 * @b: second number
 * Return: sum of a and b
 */

int op_add(int a, int b)
{	
	return (a + b);
}	

/**
 * op_sub - function that subtracts two numbers
 * @a: first number
 * @b: second number
 * Return: differnce of a and b
 */

int op_sub(int a, int b)
{	
	return (a - b);
}	

/**
 * op_mul - function that returns the product of two numbers
 * @a: first number
 * @b: second number
 * Return: the mproduct of a and b
 */

int op_mul(int a, int b)
{	
	return (a * b);
}	

/**
 * op_div -  divides two numbers
 * @a: first number
 * @b: second number
 * Return: division of a and b
 */

int op_div(int a, int b)
{	
	return (a / b);
}	

/**
 * op_mod - returns the remainder of two numbers
 * @a: first number
 * @b: second number
 * Return: remainder of the division a and b
 */

int op_mod(int a, int b)
{	
	return (a % b);
}	
