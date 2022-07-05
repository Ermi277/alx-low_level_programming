#include "main.h"

/**
 * print_line - print line
 * @n: input num
 * Return: no return
 */

void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
