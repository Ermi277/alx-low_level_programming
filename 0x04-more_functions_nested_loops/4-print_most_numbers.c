#include "main.h"

/**
 * print_most_numbers - print most numbers
 *
 * Return: no return
 */

void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (i == 2 || i == 4)
		{
		}
		else
		{
			_putchar('0' + i);
		}
		i++;
	}
	_putchar('\n');
}
