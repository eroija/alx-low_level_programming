#include "main.h"
/**
 * print_array - prints n elements of an array followed by new line
 * @a: pointer to first int
 * @n: pointer to second int
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
