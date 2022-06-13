#include "main.h"

/**
 * puts2 - only even numbers
 *
 * @str: pointer
 *
 * Return: no
 */

void puts2(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if ((str[0] % 2) == 0)
		{
			_putchar('0' + str[i]);
		}
	}
}
