#include "main.h"

/**
 * print_square - print squaer
 * @s: size of square
 *
 * Return: no return
 */

void print_square(int s)
{
	int i, j;

	if (s < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < s; i++)
		{
			for (j = 0; j < s; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
