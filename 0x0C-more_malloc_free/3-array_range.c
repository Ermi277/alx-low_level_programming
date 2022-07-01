#include "main.h"

/**
 * array_range - create an array of integer including both @min & @maz
 * @min: integer 1
 * @max: integer 2
 * Return: NULL if error or Pointer
 */

int *array_range(int min, int max)
{
	int i;
	int size;
	int *ary;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ary = malloc(sizeof(int) * size);
	if (ary == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ary[i] = min++;
	return (ary);
}
