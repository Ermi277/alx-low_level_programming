#include "main.h"

/**
 * print_array - print array with comma
 * @a: pointer
 * @n: aray size
 * Return: no return
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
		i++;
	}
}
