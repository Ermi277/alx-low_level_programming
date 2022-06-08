#include "main.ch"

/**
 * jack_bauer - prints every minute
 *
 *
 * Return: no return
 **/

void jack_bauer(void)
{
	for (char i = 0; i < 3; i++)
	{
		for (char j = 0; j < 4; j++)
		{
			for (char k = 0; k < 6; k++)
			{
				for (char l = 0; l < 10; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
			}
		}
	}
}
