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

	i = n - 1;
	while (i >= 0)
	{
		if (i < n-1)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		--i;
	}
}
