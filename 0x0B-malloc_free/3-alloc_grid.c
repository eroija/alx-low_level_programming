#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to
 * a 2 dimensional array on integers
 * @width: width of matrix
 * @height: heigth of matrix
 * Return: null on failure or if width and heigth
 * is 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int  a, b, i, j;
	int **trr;

	if (width <= 0 || heigth <= 0)
	{
		return (NULL);
	}

	else
		trr = (int **) malloc(heigth * sizeof(int *));
		if (!trr)
		{
			free(trr);
			return (NULL);
		}
		for (i = 0; i < height; i++)
		{
			trr[i] = (int *) malloc(width * sizeof(int));
			if (!trr[i])
			{
				for (j = 0; j <= i; j++)
					free(trr[j]);
				free(trr);
				return (NULL);
			}
		}
		for (a = 0; a < heigth; a++)
		{
			for (b = 0; b < width; b++)
			{
				trr[a][b] = 0;
			}
		}
		return (trr);
}
