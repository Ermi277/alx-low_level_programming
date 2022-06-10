#include "main.h"

/**
 * print_triangle - print
 *
 * @s: size of triangle
 */

void print_triangle(int s)
{
	int i, j, k;

	if (s <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= s; i++)
		{
			for (j = s; j > 1; --j)
			{
				_putchar(' ');
			}
			for (k = 0; k < i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

