#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - Entry point
  * Return: Always 0 (Success)
  */

int main(void)
{
	int b;
	char low;

	for (b = '0'; b <= '9'; b++)
		putchar(b);
	putchar('\n');

	for (low = 'a'; low <= 'f'; low++)
		putchar(low);
	putchar('\n');
	return (0);
}
