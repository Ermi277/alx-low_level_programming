#include "main.h"

/**
 * more_numbers - print 10 times
 *
 * Return: no return
 */

void more_numbers(void)
{
	int i;
	int j;

	i = 0;
	while (i < 10)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				_putchar('0' + (j / 10));
				_putchar('0' + (j % 10));
			}
			else
				_putchar('0' + j);
		}
		_putchar('\n');
		i++;
	}
}
