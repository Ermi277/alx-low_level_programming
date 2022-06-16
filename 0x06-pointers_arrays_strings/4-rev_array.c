#include "main.h"

/**
 * reverse_array - reversing the number
 * @a: num 1
 * @n: num 2
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2, i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
