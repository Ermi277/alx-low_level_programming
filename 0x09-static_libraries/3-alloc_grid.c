#include "main.h"

/**
 * alloc_grid - create a 2 dimensional matrix;
 * @width: width of the matrix
 * @height: heightof the matrix
 * Return: a matrix
 */

int **alloc_grid(int width, int height)
{
	int i, j, k;
	int *p;
	int **x;

	if (width <= 0 || height <= 0)
		return (NULL);
	x = malloc(sizeof(int *) * height);
	if (x == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		x[i] = malloc(sizeof(int) * width);
		if (x[i] == 0)
		{
			for (i = 0; i < height; i++)
			{
				p = x[i];
				free(p);
			}
			free(x);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (j = 0; j < width; j++)
		{
			x[i][j] = 0;
		}
	}
	return (x);
}
