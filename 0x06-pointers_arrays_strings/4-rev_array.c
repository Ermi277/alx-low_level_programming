#include "main.h"

/**
 * reverse_array - reversing the number
 * @a: num 1
 * @n: num 2
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i;

	i = n;
	while (i > 0)
	{
		printf("%d, ", a[i]);
		--i;
	}
}
