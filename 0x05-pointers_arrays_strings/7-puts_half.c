#include "main.h"

/**
 * puts_half - print half of a string
 * @str: pointer
 * Return: no
 */

void puts_half(char *str)
{
	int i;
	int len = strlen(str);

	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
	i	}
	}
	else
	{
		for (i = (len - 1) / 2) + 1; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
