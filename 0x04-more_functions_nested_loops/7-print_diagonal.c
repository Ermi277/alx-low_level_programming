#include "main.h"

/**
 * print_diagonal - print
 * @n: number line
 * Return: no return
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n == 0)
	{
		_putchar(' ');
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
