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
	int i = 0;
	int len = strlen(str);

	while (i < len)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
