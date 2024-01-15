#include "main.h"

/*
  * _is digit - function that checks for a digit
  *
  *@c: parameter to be printed
  *
  * Return: 1 if its a digit and 0 therwise
  */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
