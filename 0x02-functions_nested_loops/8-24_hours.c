#include "main.h"

/**
 * jack_bauer - prints every minute
 *
 *
 * Return: no return
 **/

void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 9; j++)
		{
			for (k = 0; k < 6; k++)
			{
				for (l = 0; l < 10; l++)
				{
					if (i == 2 && j == 3 && k == 5 && l == 9)
					{
						_putchar('\n');
						break;
					}
					else
					{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + k);
					_putchar('0' + l);
					_putchar('\n');
					}
				}
			}
		}
	}
}
